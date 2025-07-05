// Starfield.cpp
// A classic C++ program to generate a 3D starfield animation in the console.
//
// How it works:
// 1. A set of stars is created, each with 3D coordinates (x, y, z).
// 2. In a loop, each star's 'z' coordinate is decreased to move it toward the viewer.
// 3. A 3D perspective projection formula is used to convert the star's (x, y, z)
//    into 2D screen coordinates (sx, sy). The key is that objects are scaled
//    inversely by their distance (z): sx = x / z, sy = y / z.
// 4. The screen is cleared, and the stars are drawn at their new positions.
// 5. The brightness of a star is determined by its proximity (its 'z' value).
//
// To Compile & Run (on Linux/macOS or with MinGW/WSL on Windows):
// g++ -std=c++11 -o starfield Starfield.cpp
// ./starfield
//
// Press Ctrl+C to exit.

#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <chrono>
#include <thread>

// --- Configuration ---
const int SCREEN_WIDTH = 80;
const int SCREEN_HEIGHT = 24;
const int NUM_STARS = 500;
const int FRAME_DELAY_MS = 50; // Milliseconds to wait between frames

// Represents a single star in our 3D space
struct Star {
    float x, y, z;
};

// Function to reset a star to a new random position
void resetStar(Star& star, std::mt19937& rng) {
    std::uniform_real_distribution<float> rand_x(-SCREEN_WIDTH / 2.0f, SCREEN_WIDTH / 2.0f);
    std::uniform_real_distribution<float> rand_y(-SCREEN_HEIGHT / 2.0f, SCREEN_HEIGHT / 2.0f);
    std::uniform_real_distribution<float> rand_z(1.0f, SCREEN_WIDTH); // Start at a distance

    star.x = rand_x(rng);
    star.y = rand_y(rng);
    star.z = rand_z(rng);
}

int main() {
    // --- Initialization ---
    std::vector<Star> stars(NUM_STARS);
    
    // Modern C++ random number generation
    std::random_device rd;
    std::mt19937 rng(rd());

    // Create the initial set of stars
    for (int i = 0; i < NUM_STARS; ++i) {
        resetStar(stars[i], rng);
    }

    // A character buffer to hold the frame before printing
    std::vector<char> screen(SCREEN_WIDTH * SCREEN_HEIGHT);

    std::cout << "\nClassic C++ Starfield. Press Ctrl+C to exit.\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Pause for user to read

    // --- Main Animation Loop ---
    while (true) {
        // 1. Clear the screen buffer
        std::fill(screen.begin(), screen.end(), ' ');

        // 2. Update and draw each star
        for (auto& star : stars) {
            // Move star closer to the camera
            star.z -= 0.2f;

            // If star is behind the camera or too close, reset it
            if (star.z <= 0) {
                resetStar(star, rng);
            }

            // 3. Project from 3D to 2D
            // The magic of perspective projection!
            // Division by Z makes things further away appear closer to the center.
            int sx = static_cast<int>((star.x / star.z) * (SCREEN_WIDTH / 2.0f) + (SCREEN_WIDTH / 2.0f));
            int sy = static_cast<int>((star.y / star.z) * (SCREEN_HEIGHT / 2.0f) + (SCREEN_HEIGHT / 2.0f));

            // If the star is on screen
            if (sx >= 0 && sx < SCREEN_WIDTH && sy >= 0 && sy < SCREEN_HEIGHT) {
                // 4. Choose character based on distance to simulate brightness
                char character = '.';
                if (star.z < SCREEN_WIDTH / 4.0f) {
                    character = '@'; // Very close
                } else if (star.z < SCREEN_WIDTH / 2.0f) {
                    character = '*'; // Close
                } else if (star.z < SCREEN_WIDTH * 0.75f) {
                    character = '+'; // Mid-range
                }
                
                // Place the star character in our screen buffer
                screen[sy * SCREEN_WIDTH + sx] = character;
            }
        }

        // 5. Render the frame
        // Move cursor to top-left corner using an ANSI escape code
        std::cout << "\033[H";
        for (int y = 0; y < SCREEN_HEIGHT; ++y) {
            for (int x = 0; x < SCREEN_WIDTH; ++x) {
                std::cout << screen[y * SCREEN_WIDTH + x];
            }
            std::cout << '\n';
        }
        
        // Use std::cout.flush() to ensure the frame is displayed immediately.
        std::cout.flush();

        // 6. Wait for a short duration
        std::this_thread::sleep_for(std::chrono::milliseconds(FRAME_DELAY_MS));
    }

    return 0;
}

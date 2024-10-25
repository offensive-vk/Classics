#include <iostream>
#include <fstream>
#include <complex>
#include <vector>
#include <thread>

const int WIDTH = 800;
const int HEIGHT = 800;
const int MAX_ITER = 1000;

// Function to compute Mandelbrot set for a given pixel
int mandelbrot(std::complex<double> c) {
    std::complex<double> z = 0;
    int iterations = 0;
    while (std::abs(z) <= 2.0 && iterations < MAX_ITER) {
        z = z * z + c;
        ++iterations;
    }
    return iterations;
}

// Function to render a portion of the Mandelbrot set (executed by each thread)
void render_section(int start_row, int end_row, std::vector<int>& image) {
    for (int y = start_row; y < end_row; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            std::complex<double> c(
                (x - WIDTH / 2.0) * 4.0 / WIDTH, 
                (y - HEIGHT / 2.0) * 4.0 / HEIGHT
            );
            int color = mandelbrot(c);
            image[y * WIDTH + x] = color;
        }
    }
}

int main() {
    std::vector<int> image(WIDTH * HEIGHT);
    int num_threads = std::thread::hardware_concurrency();  // Use all available cores
    std::vector<std::thread> threads;

    std::cout << "Generating Mandelbrot set using " << num_threads << " threads...\n";

    // Divide the work among threads
    int rows_per_thread = HEIGHT / num_threads;
    for (int i = 0; i < num_threads; ++i) {
        int start_row = i * rows_per_thread;
        int end_row = (i == num_threads - 1) ? HEIGHT : start_row + rows_per_thread;
        threads.emplace_back(render_section, start_row, end_row, std::ref(image));
    }

    // Join all threads
    for (auto& thread : threads) {
        thread.join();
    }

    // Write the image to a PPM file
    std::ofstream ofs("mandelbrot.ppm");
    ofs << "P3\n" << WIDTH << " " << HEIGHT << "\n255\n";
    for (int i = 0; i < WIDTH * HEIGHT; ++i) {
        int color = (255 * image[i]) / MAX_ITER;
        ofs << color << " " << 0 << " " << 255 - color << "\n";
    }
    ofs.close();

    std::cout << "Mandelbrot set generated! Check 'mandelbrot.ppm' for the result.\n";
    return 0;
}

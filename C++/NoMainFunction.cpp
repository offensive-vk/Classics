#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
   MessageBox(NULL, "Hello, world!", "Message", MB_OK);
   return 0;
}

// #include <iostream>

// struct PrintMessage {
//     PrintMessage() {
//         std::cout << "Hello, world!" << std::endl;
//     }
// };

// PrintMessage printMessage; // Static initialization triggers printing

// int dummyFunction() {
//     return 0;
// }

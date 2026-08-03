//
// Created by Khan Ahmed on 8/2/26.
//

#include <cstdint>
#include <iostream>

//1. const qualifier
// int main(int argc, char *argv[]) {
//     // const qualifier
//
//     const int number = 10;
//
//     std::cout << number << std::endl;
//
//     // compile error: cannot assign to variable 'number' with const-qualified type 'const int'
//     number = 11;
// }

// 2. constexpr qualifier
// constexpr int square(int x) {
//     return x * x;
// }
//
// int main() {
//     constexpr int result = square(5);  // runs at compile time
//     // compiler replaces this with 25
//     // no function call in the binary
//
//     int userInput = 6;
//      int runtime = square(userInput);   // runs at runtime
//     // userInput unknown at compile time
//     // actual function call happens here
//
//     std::cout << result << "\n";       // prints 25
//     std::cout << runtime << "\n";      // prints 36
// }


// 3. volatile qaulifier
//
// // simulating a hardware status register
// // in real embedded code this would be a memory-mapped address
// volatile bool deviceReady = false;
//
// void waitForDevice() {
//     // without volatile — compiler optimizes to infinite loop
//     // it never re-reads deviceReady, assumes it stays false
//
//     // with volatile — re-reads deviceReady every single iteration
//     while (!deviceReady) {
//         // waiting...
//     }
//     std::cout << "Device is ready\n";
// }
//
// int main() {
//     // in real code, deviceReady would be flipped by:
//     // - a hardware interrupt
//     // - a signal handler
//     // - memory-mapped hardware
//
//     deviceReady = true;   // simulating hardware flipping the flag
//     waitForDevice();
// }

// 4. mutable qualifier
// class Cache {
//     mutable int accessCount = 0;  // mutable field
//     int data = 42;
//
// public:
//     // const function — promises not to modify the object
//     int getData() const {
//         accessCount++;   // allowed — accessCount is mutable
//         return data;
//     }
// };
//
// int main() {
//     const Cache c;
//     std::cout << c.getData() ;   // works — even on a const object
// }
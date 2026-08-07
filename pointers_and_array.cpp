//
// Created by Khan Ahmed on 8/6/26.
//


#include <iostream>
#include <ostream>

int main () {

    int highScores[5] = {900, 750, 620, 480, 300};
    int* scorePtr = highScores;

    std::cout << "1. array name vs &first element\n";
    std::cout << "  highScores     = " << highScores     << '\n';
    std::cout << "  &highScores[0] = " << &highScores[0] << '\n';
    std::cout << "  scorePtr       = " << scorePtr       << "\n\n";

    std::cout << "2. sizeof\n";
    std::cout << "  sizeof(highScores)  = " << sizeof(highScores)  << "  (5 ints)\n";
    std::cout << "  sizeof(scorePtr)    = " << sizeof(scorePtr)    << "  (the pointer)\n";
    std::cout << "  sizeof(*scorePtr)   = " << sizeof(*scorePtr)   << "  (one int)\n";
    std::cout << "  sizeof(scorePtr[0]) = " << sizeof(scorePtr[0]) << "  (one int)\n\n";

    std::cout << "Diffetent ways to access the values of the scores array\n";
    for (int i = 0 ; i < 5; i++) {
        std::cout << highScores[i] <<"\n";
        std::cout << *(scorePtr+i) << "\n";
        std::cout << *(highScores + i) << "\n";
        std::cout << scorePtr[i] << "\n\n";
    }

    // ---- 4. +1 steps by one ELEMENT, not one byte ----
    std::cout << "4. addresses step by sizeof(int) = " << sizeof(int) << " bytes\n";
    for (int i = 0; i < 5; ++i)
        std::cout << "  scorePtr + " << i << " = " << (scorePtr + i) << '\n';
    std::cout << '\n';

    // ---- 5. Walking with the pointer itself ----
    // highScores + 5 is "one past the end": legal to compare, illegal to dereference.
    std::cout << "5. pointer walk (this is what iterators do)\n  ";
    for (int* p = highScores; p != highScores + 5; ++p) std::cout << *p << ' ';
    std::cout << "\n\n";


    // wiritig throguh a pointer.
    scorePtr[3] = 500;

    *(scorePtr + 2) = 800;


    // ---- 5. Walking with the pointer itself ----
    // highScores + 5 is "one past the end": legal to compare, illegal to dereference.
    std::cout << "5. pointer walk (this is what iterators do)\n  ";
    for (int* p = highScores; p != highScores + 5; ++p) std::cout << *p << ' ';
    std::cout << "\n\n";

    // ---- 8. Decay when passed to a function ----
    std::cout << "8. the size is lost at the call\n";
    printScores(highScores, 5);
    std::cout << '\n';


    return 0;
}


// The parameter LOOKS like an array but is really an int* — the size is gone,
// which is why C-style code always passes the count alongside it.
void printScores(const int* scores, std::size_t count) {
    std::cout << "  inside function, sizeof(scores) = " << sizeof(scores)
              << "  <- 8, the pointer, NOT the array\n  ";
    for (std::size_t i = 0; i < count; ++i) std::cout << scores[i] << ' ';
    std::cout << '\n';
}
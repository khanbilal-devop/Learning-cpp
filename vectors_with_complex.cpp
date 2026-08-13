//
// Created by Khan Ahmed on 8/13/26.
//


#include <vector>
#include <complex>
#include <iostream>

int main() {
    std::vector<std::complex<double>> points;
    // resering buffer in heap for four points
    points.reserve(4);
    std::cout << points.capacity() << std::endl;

    // creating complex objects inside buffer avoiding duplicaiton of objects
    points.emplace_back(3.5, 4.0);
    points.emplace_back(1.0, -2.1);
    points.emplace_back(-5.3, 6.0);
    points.emplace_back(7.2, 8.9);

    std::vector<std::complex<double>>::iterator ptr = points.begin();
    std::cout << "Start element of the buffer : " << ptr->imag() << std::endl;
    std::cout << "Second element imaginary of the buffer : " << (ptr+1)->imag() << std::endl;
    std::cout << "Third element of the buffer : " << *(ptr+2) << std::endl;
    std::cout << "Fourth element of the buffer : " << *(ptr+3) << std::endl;

    std::cout << "The first real part: " << points.begin()->real() << std::endl;
    std::cout << "Imaginary part at index 1: " << points[1].imag() << std::endl;
    std::cout << "Next to last real: " << prev(points.end(), 2)->real() << std::endl;
    std::cout << "Last imaginary: " << (points.end() - 1)->imag() << std::endl;
}

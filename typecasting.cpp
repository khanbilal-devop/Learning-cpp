//
// Created by Khan Ahmed on 8/4/26.
//


#include <iostream>
#include <ostream>

int main () {

   u_int16_t farhenit = 100;
   u_int16_t celsisus;

   celsisus = (5/static_cast<float>(9)) * (farhenit - 32);

   std::cout << celsisus << "\n";

   float_t number = 10.99;

   std::cout << "Float part :" << number << "\n";
   std::cout << "Integer part :" << static_cast<int>(number) << "\n";
   std::cout << "Fract part upto four :" << (number -  static_cast<int>(number)) * 10000 << "\n";
}

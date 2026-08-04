//
// Created by Khan Ahmed on 8/4/26.
//
#include <iostream>
#include <vector>
#include <map>

// Create an alias for a very long data type
using StudentGrades = std::map<std::string, std::vector<int>>;

int main() {
    // Now you can use StudentGrades instead of typing out the whole map structure
    StudentGrades classGrades;
    classGrades["Alice"] = {90, 85, 92};
    std::cout << "Grades\n";
    for (int grade : classGrades["Alice"]) {
        std::cout <<  grade << std::endl;
    }
    return 0;
}
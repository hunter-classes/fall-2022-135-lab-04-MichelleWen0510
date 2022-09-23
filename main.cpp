/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 4 Task A,B,C,D,E,F,G

Main to test and also input.
*/

#include <iostream>
#include "functions.h"

int main()
{
	std::cout << "box(5,5);\n";
	std::cout << box(5,5);
	std::cout << "\n------------------\n";

	std::cout << "checkerboard(9,6);\n";
	std::cout << checkerboard(9,6);
	std::cout << "\n------------------\n";
	
	std::cout << "cross(8);\n";
        std::cout << cross(8);
        std::cout << "\n------------------\n";

	std::cout << "lower(5);\n";
        std::cout << lower(5);
        std::cout << "\n------------------\n";

	std::cout << "upper(5);\n";
        std::cout << upper(5);
        std::cout << "\n------------------\n";
	
	std::cout << "trapezoid(12,5);\n";
        std::cout << trapezoid(12,5);
	std::cout << "trapezoid(12,7);\n";
        std::cout << trapezoid(12,7);
        std::cout << "\n------------------\n";
	
	std::cout << "checkerboard3x3(13,7);\n";
	std::cout << checkerboard3x3(13,7);
	std::cout << "checkerboard3x3(15,9);\n";
        std::cout << checkerboard3x3(15,9);
	std::cout << "\n------------------\n";
	
	return 0;
}


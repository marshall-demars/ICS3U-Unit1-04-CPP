// Copyright (c) 2022 Marshall Demars All rights reserved
//
// Created by: Marshall Demars
// Created on: Sept 2022
// This program calculates the area and perimeter with dimensions of 5cm and 3cm

#include <iostream>

int main() {
    // this function calculates area and perimeter
    std::cout << "If a rectangle has the dimensions: " << std::endl;
    std::cout << "5cm x 3cm" << std::endl;
    std::cout << "\nArea is " << (5 * 3) << "cm²." << std::endl;
    std::cout << "Perimeter is " << (2 * (5 + 3)) << "cm." << std::endl;
    std::cout << std::endl;

    std::cout << "\nDone.";
}

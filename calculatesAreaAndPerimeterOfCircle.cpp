// Copyright (c) 2021 Felipe Affonso All rights reserved
//
// Created by: Felipe Affonso
// Created on: april 2021
// This is the program that calculates area and perimeter of any rectangle

#include <iostream>
#include <cmath>


int main()    {
    int length;
    int width;

    std::cout << "What is the length of the rectangle in mm?" << std::endl;
    std::cin >> length;
    std::cout << "What is the width of the rectangle in mm?" << std::endl;
    std::cin >> width;
    std::cout << std::endl;
    std::cout << "Area:" << (width*length) << " mm²" << std::endl;
    std::cout << "Perimeter:" << (2*(width+length)) << " mm" << std::endl;
}

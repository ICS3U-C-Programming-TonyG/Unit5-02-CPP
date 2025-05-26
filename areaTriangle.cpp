// Copyright (c) Year Tony G All rights reserved.

// Created by Tony G

// Date: 2025-05-26

// base and height for area

#include <iostream>

float getBase() {
    float base;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    return base;
}

float getHeight() {
    float height;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    return height;
}

float calculateArea(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    float base = getBase();
    float height = getHeight();
    float area = calculateArea(base, height);
    std::cout << "The area of the triangle is " << area << std::endl;
}

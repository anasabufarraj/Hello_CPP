// Copyright (c) Anas Abu Farraj 2024.

#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle::draw() {
    cout << "Drawing rectangle..." << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const {
    return width * height;
}

// getter
int Rectangle::getWidth() const {
    return width;
}

// setter
void Rectangle::setWidth(int w) {
    if (w < 0) {
        throw invalid_argument("The width cannot be negative!");
    }

    if (w > 100) {
        throw out_of_range("The width cannot exceed 100!");
    }
    Rectangle::width = w;
}

// getter
int Rectangle::getHeight() const {
    return height;
}

// setter
void Rectangle::setHeight(int h) {
    if (h < 0) {
        throw invalid_argument("The height cannot be negative!");
    }
    Rectangle::height = h;
}

// Copyright (c) Anas Abu Farraj 2024.

#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    Rectangle rectangle{};
    rectangle.setWidth(10); // using setter
    rectangle.setHeight(20); // using getter

    rectangle.draw();
    cout << "Area: " << rectangle.getArea() << endl;

    cout << rectangle.getWidth() << endl; // 10
    cout << rectangle.getHeight() << endl; // 20
    return 0;
}

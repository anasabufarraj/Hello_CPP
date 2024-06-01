// Copyright (c) Anas Abu Farraj 2024.

#ifndef HELLO_CPP_RECTANGLE_H
#define HELLO_CPP_RECTANGLE_H

class Rectangle {
public:

    void draw();

    int getArea() const;

    int getWidth() const;

    void setWidth(int width);

    int getHeight() const;

    void setHeight(int height);

private:
    int width;
    int height;
};

#endif // HELLO_CPP_RECTANGLE_H

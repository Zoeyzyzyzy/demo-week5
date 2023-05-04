#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "point.h"

class Rectangle : public Point {
public:
    Rectangle(int x, int y, int width, int height);
    int getWidth() const;
    int getHeight() const;
private:
    int width_;
    int height_;
};

#endif

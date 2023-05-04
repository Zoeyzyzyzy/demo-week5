#include<iostream>
#include "triangle.h"

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) : Point(x1, y1), x1_(x1), y1_(y1), x2_(x2), y2_(y2), x3_(x3), y3_(y3) {}

void Triangle::printVertices() const {
    std::cout << "Vertex 1: (" << x1_ << ", " << y1_ << ")" << std::endl;
    std::cout << "Vertex 2: (" << x2_ << ", " << y2_ << ")" << std::endl;
    std::cout << "Vertex 3: (" << x3_ << ", " << y3_ << ")" << std::endl;
}


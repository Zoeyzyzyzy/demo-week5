#include<iostream>
#include "rectangle.h"
#include "triangle.h"

int main() {
    Point p(1, 2);
    Rectangle r(3, 4, 5, 6);
    Triangle t(1, 2, 3, 4, 5, 6);

    std::cout << "Point (" << p.getX() << ", " << p.getY() << ")" << std::endl;
    std::cout << "Rectangle (" << r.getX() << ", " << r.getY() << "), width " << r.getWidth() << ", height " << r.getHeight() << std::endl;
    t.printVertices();

    return 0;
}

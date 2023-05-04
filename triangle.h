#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

class Triangle : public Point {
public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    void printVertices() const;
private:
    int x1_;
    int y1_;
    int x2_;
    int y2_;
    int x3_;
    int y3_;
};

#endif

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x, int y);
    int getX() const;
    int getY() const;
private:
    int x_;
    int y_;
};

#endif

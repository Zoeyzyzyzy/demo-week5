#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height) : Point(x, y), width_(width), height_(height) {}

int Rectangle::getWidth() const {
    return width_;
}

int Rectangle::getHeight() const {
    return height_;
}

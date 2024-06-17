#include "Circle.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const {
    return radius;
}

double Circle::getArea() const {
    return M_PI * pow(radius, 2);
}
//
// Created by kopyt on 09.06.2024.
//
#include "Square.h"
#include <cmath>

Square::Square(double a) : side(a) {}

double Square::getSideSquare() const {
    return side;
}

double Square::getAreaSquare() const {
    return pow(side, 2);
}

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    const double radius;

public:
    Circle(double r);
    double getRadius() const;
    double getArea() const;
};

#endif // CIRCLE_H

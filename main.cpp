#include <iostream>
#include "Circle.h"
#include "Square.h"


using namespace std;

int main() {
    Circle circle(5.0);

    cout << "Promien kola: " << circle.getRadius() << "j" << endl;
    cout << "Pole powierzchni kola: " << circle.getArea() << "j^2" << endl;

    Square square(10);

    cout << "Bok kwadratu: " << square.getSideSquare() << "j" << endl;
    cout << "Pole kwadratu: " << square.getAreaSquare() << "j^2" << endl;

    return 0;
}
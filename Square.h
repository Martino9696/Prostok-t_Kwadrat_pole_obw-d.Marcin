//
// Created by kopyt on 09.06.2024.
//

#ifndef KOO_PROSTOKT_KWADRAT_SQUARE_H
#define KOO_PROSTOKT_KWADRAT_SQUARE_H

class Square {
private:
    const double side;

public:
    Square(double a);
    double getSideSquare() const;
    double getAreaSquare() const;
};

#endif // SQUARE_H


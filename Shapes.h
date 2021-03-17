//
// Created by Rob Prellwitz on 3/12/21.
//

#ifndef C___LEARNING_SHAPES_H
#define C___LEARNING_SHAPES_H


class Shapes {
public:
    double area();
    double perimeter();


};

class Rectangle : public Shapes{
public:
    double area(double length, double width);
    double perimeter(double length, double width);
};

class Triangle: public Shapes{
    double area(double base, double height);
    double area (double side1, double side2, double side3);
    double perimeter(double side1, double side2, double side3);
};




#endif //C___LEARNING_SHAPES_H

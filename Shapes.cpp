//
// Created by Rob Prellwitz on 3/12/21.
//

#include "Shapes.h"
#include <math.h>

double Rectangle::area(double length, double width) {
    double area = length * width;
    return area;
}
double Rectangle::perimeter(double lenght, double width) {
    double perimeter = 2 * lenght + 2 * width;
    return perimeter;
}
double Triangle::area(double base, double height) {
    double area = 0.5* base * height;
    return area;
}
double Triangle::area(double side1, double side2, double side3) {
    //double triPerim = Triangle.perimiter(side1,side2,side3)
    double perimeter = (side3+side2+side1)/2;
    double area = sqrt(perimeter*(perimeter-side1)*(perimeter-side2)*(perimeter-side3));
    return area;
}

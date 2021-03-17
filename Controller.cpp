//
// Created by Rob Prellwitz on 3/12/21.
//
#include <iostream>
#include "Controller.h"
#include "Shapes.h"
using namespace std;
Shapes newShapes;
Rectangle r;


void Controller::shapeSelect() {
    int temp;
    cout << "Please Select a shape to work with:" << endl;
    cout << "Rectange enter 1:" << endl << "Triangle enter 2:" << endl;
    cin >>  temp;

    switch (temp) {
        case 1:
        cout << "Rectangle";
        break;
        case 2:
        {cout << "Triangle";
        break;}
    }
}

void Controller::calcRectangle() {
    double side1; double side2;
    cout << "What is the length of the first side?" << endl;
    cin >> side1;
    cout << endl << "What is the length of the second side?" << endl;
    cin >> side2;
    double perimeter = r.perimeter(side1, side2);
    cout << "The perimeter of your rectangle is: " << perimeter;
    double area = r.area(side1, side2);
    cout << "The area of your rectangle is :" << area;

}
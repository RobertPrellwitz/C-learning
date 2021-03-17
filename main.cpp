#include <iostream>
#include "ProblemSolving.h"
#include "Controller.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    ProblemSolving newProblemSolving;
    newProblemSolving.GetString();
    newProblemSolving.lowerCase();
    newProblemSolving.removeSpaces();
    newProblemSolving.checkPalindrome();

    Controller newController;

    newController.shapeSelect();



    return 0;

}

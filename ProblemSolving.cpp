//
// Created by Rob Prellwitz on 3/9/21.
//
#include <string>
#include <cstdlib>
#include <iostream>
#include <locale>
#include "ProblemSolving.h"
using namespace std;

string phrase;

void ProblemSolving::GetString() {
    cout << "Please enter your favorite String in the Palindrome Checker!";
    cin >> phrase;
}
void ProblemSolving::lowerCase(){
    string phrase2;
    int i = phrase.length()-1;
    char c;
    while (i >= 0){
        phrase[i] = tolower(phrase[i]);
        c = phrase[i];
        i--;
        cout << c;
    }
    cout << "\n" << phrase;
}
void ProblemSolving::removeSpaces() {
    cout << "Your phrase as entered without spaces:";
}
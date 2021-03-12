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
    cout << "Please enter your favorite String in the Palindrome Checker!" << endl;
    getline(cin, phrase);
    cout << phrase << endl;
}
void ProblemSolving::lowerCase(){
    int i = phrase.length()-1;
    while (i >= 0){
        phrase[i] = tolower(phrase[i]);
        i--;
    }

    cout << "\n" << "Your Phrase without Caps:  " << phrase << endl;
}
void ProblemSolving::removeSpaces() {
    //phrase.erase(remove(phrase.begin(), phrase.end(), " "),phrase.end());
    int length = phrase.length();
    for (int i = 0; i < length; i++){
        if(phrase[i] == ' '){
            phrase.erase(i,1);
            length--;
            i--;
        }
    }
    cout << "Your phrase as entered without spaces:" << endl;
    cout << phrase << endl;
}

void ProblemSolving::checkPalindrome() {
    int j = phrase.length();
    bool check = true;
    for (int i = 0; i<= j/2; i++){
        if (phrase[i] == phrase[j-1]){
            j--;
        }
        else {
            check = false;
            break;
        }
    }
    if (check == true){
        cout << phrase << " Is a palindrome! " << endl;
    }
    else{
        cout << phrase << " Is not a palindrome!" << endl;
    }
}
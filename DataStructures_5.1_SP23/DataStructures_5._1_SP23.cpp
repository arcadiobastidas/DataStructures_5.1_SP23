#include <iostream>
#include "StackInterface.h"
#include "BraceChecker.cpp"
#include <string>
using namespace std;



int main() {
    string expression1,expression2;
    BracesChecker<char> checker; //create a stack of chars to check braces
    cout << "Enter first expression:";
    getline(cin, expression1);
    cout << "Enter second expression:";
    getline(cin, expression2);
    if (checker.isBalanced(expression1)) {
        cout << expression1 << " is balanced." << endl;
    } else {
        cout << expression1 << " is not balanced." << endl;
    }
    if (checker.isBalanced(expression2)) {
        cout << expression2 << " is balanced." << endl;
    } else {
        cout << expression2 << " is not balanced." << endl;
    }
    return 0;
}
#include <iostream>
#include "StackInterface.h"
#include "LinkedStack.cpp"
#include "Node.cpp"
#include "BraceChecker.cpp"
using namespace std;



int main() {
    BracesChecker<char> checker; //create a stack of chars to check braces
    string expression1 = "{ab(c[d])e}"; // balanced
    string expression2 = "{ab(c))"; // not balanced
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
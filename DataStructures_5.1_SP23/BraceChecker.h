#include <iostream>
#include "ArrayStack.cpp"

using namespace std;

template<class ItemType>
class BracesChecker {
public:
    bool isOpeningBracket(char bracket) const;
    bool isClosingBracket(char bracket) const;
    bool isMatchingBracket(char opening, char closing) const;
    bool isBalanced(const string& expression) const;
};



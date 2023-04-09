#include "BraceChecker.h"
 
 template<class ItemType>
 bool BracesChecker<ItemType>::isOpeningBracket(char bracket) const {
     return bracket == '(' || bracket == '[' || bracket == '{';
 }
 
 template<class ItemType>
 bool BracesChecker<ItemType>::isClosingBracket(char bracket) const {
     return bracket == ')' || bracket == ']' || bracket == '}';
 }
 
 template<class ItemType>
 bool BracesChecker<ItemType>::isMatchingBracket(char opening, char closing) const {
     return (opening == '(' && closing == ')') ||
            (opening == '[' && closing == ']') ||
            (opening == '{' && closing == '}');
 }
 
 template<class ItemType>
 bool BracesChecker<ItemType>::isBalanced(const string& expression) const {
     ArrayStack<ItemType> stack;
     for (int i = 0; i < expression.length(); i++) {
         char currentChar = expression[i];
         if (isOpeningBracket(currentChar)) {
             stack.push(currentChar);
         } else if (isClosingBracket(currentChar)) {
             if (stack.isEmpty() || !isMatchingBracket(stack.peek(), currentChar)) {
                 return false;
             } else {
                 stack.pop();
             }
         }
     }
     return stack.isEmpty();
 }
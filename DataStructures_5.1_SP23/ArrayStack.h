//  Created by Frank M. Carrano and Tim Henry.
//  Copyright (c) 2013 __Pearson Education__. All rights reserved.

/** ADT stack: Array-based implementation.
 Listing 7-1
 @file ArrayStack.h */

#ifndef _ARRAY_STACK
#define _ARRAY_STACK

#include "StackInterface.h"

using namespace std;
const int MAX_STACK = 50; // Maximum stack size changed from 5 to 50 to be able to go through all the test cases

template<class ItemType>
class ArrayStack : public StackInterface<ItemType>
{
private:	
    ItemType items[MAX_STACK]; // Array of stack items
    int      top;              // Index to top of stack
	
    public:
    ArrayStack();             // Default constructor
    bool isEmpty() const;
    bool push(const ItemType& newEntry);
    bool pop();
    ItemType peek() const;	
}; // end ArrayStack


#endif

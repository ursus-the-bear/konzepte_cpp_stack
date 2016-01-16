//
//  Stack.cpp
//  stack
//
//  Created by ursus on 11/11/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include "Stack.hpp"
#include <stdlib.h>

Stack::Stack (int size) {
    
    this->pValues = new int [size];  // this array is then on the heap
    this->size = size;
    this->top = EMPTY_STACK;
    
}

Stack::~Stack () {
    
    delete [] pValues;
    this->pValues = NULL;
    this->top = EMPTY_STACK;
    
}

Stack::Stack (const Stack& s) {
    
    
    // copy the array here!!!
    
}

void Stack::operator=(<#const Stack &s#>) {
    
    if (this == &s) return;   // not needed in constructor because this COULD not be allocated
    
    delete[] values;
    values = new int [];
    
    // copy values
    
}

void Stack::Push (int value) {
    
    this->top++;
    this->pValues [this->top] = value;
    
}

void Stack::Pop () {
    
    if (this->top == EMPTY_STACK) {
        printf("Empty stack\n");
    } else {
        printf("Current top of Stack: %d\n", this->pValues [this->top]);
        this->top--;
    }
}
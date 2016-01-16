//
//  main.cpp
//  stack
//
//  Created by ursus on 11/11/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include <iostream>
#include "stack.hpp"


void f (Stack s) {
    
    
    s.Pop();
    
    
}


int main(int argc, const char * argv[]) {
    
    Stack myStack (20);
    
    myStack.Push(100);
    myStack.Push(200);
    myStack.Push(300);
    
    f (myStack);
    
    myStack.Pop();
    
    return 0;
}



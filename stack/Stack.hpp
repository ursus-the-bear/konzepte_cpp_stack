//
//  Stack.hpp
//  stack
//
//  Created by ursus on 11/11/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>


#define EMPTY_STACK -1

class Stack {
    
private:
    
    int * pValues;   // this is on the stack
    int size;
    int top;
    
public:
    
    Stack (int size = 16);
    Stack (const Stack& s);
    ~Stack ();
    void Push (int currValue);
    void Pop ();
    
    // this is added so that you do not loose the pointer to your array
    void operator = (const Stack& s);
    // Stack& operator = (const Stack& s);   // Stack& allows you to do chaining of operators i.e. x = y = z
    
    
    
};

#endif /* Stack_hpp */

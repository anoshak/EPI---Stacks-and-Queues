/*
 * Q11_Queue_using_Stack.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Queue {
private:
    stack<int> s1, s2;

    void shiftStacks()
    {
        while(s1.size())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
public:
    // Push element x to the back of queue.
    void push(int x) {
        s1.push(x);
    }

    // Removes the element from in front of queue.
    void pop(void) {
        if(s2.empty())
            shiftStacks();
        s2.pop();
    }

    // Get the front element.
    int peek(void) {
        if(s2.empty())
            shiftStacks();
        return s2.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return (s1.empty() && s2.empty());
    }
};



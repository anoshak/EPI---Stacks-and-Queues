/*
 * Q1_maxStack.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class MaxStack {
private:
    stack<int> mainStack, maxStack;
public:
    void push(int x) {
        mainStack.push(x);
        if(maxStack.empty())
            maxStack.push(x);
        else if(x >= maxStack.top())
                maxStack.push(x);
    }

    void pop() {
        if(mainStack.top() == maxStack.top())
            maxStack.pop();
        mainStack.pop();
    }

    int top() {
        return mainStack.top();
    }

    int getMax() {
        return maxStack.top();
    }
};



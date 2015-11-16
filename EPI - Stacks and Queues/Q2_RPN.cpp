/*
 * Q2_RPN.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operands;
        for(int i=0;i< tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*" )
            {
                int op2 = operands.top();
                operands.pop();
                int op1 = operands.top();
                operands.pop();
                int c = tokens[i][0];
                switch (c)
                {
                    case '+':
                        operands.push(op1 + op2);
                        break;
                    case '-':
                        operands.push(op1 - op2);
                        break;
                    case '/':
                        operands.push(op1 / op2);
                        break;
                    case '*':
                        operands.push(op1 * op2);
                        break;
                }
            }
            else operands.push(stoi(tokens[i]));
        }
        return operands.top();
    }
};



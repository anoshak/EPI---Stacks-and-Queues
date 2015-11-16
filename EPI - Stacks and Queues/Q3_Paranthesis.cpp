/*
 * Q3_Paranthesis.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"


class Solution {
public:
    bool isValid(string s) {
        stack<char> mystack;
        for(int i=0; i<s.length() ; i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                mystack.push(s[i]);
            else
            {
                if (mystack.size() == 0)
                    return false;
                else if(s[i] == ')' && mystack.top() != '(')
                    return false;
                else if(s[i] == '}' && mystack.top() != '{')
                    return false;
                else if(s[i] == ']' && mystack.top() != '[')
                    return false;
                mystack.pop();
            }
        }
        if(mystack.size()==0)
            return true;
        else return false;
    }
};



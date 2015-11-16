/*
 * Q4_Normalize_path.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> mystack;
        stringstream pathstream(path);
        string temp;
        while(getline(pathstream,temp,'/'))
        {
            if(temp == "" || temp == ".")
                continue;
            else if (temp == ".." && mystack.size())
                mystack.pop_back();
            else if (temp != "..")
                mystack.push_back(temp);
        }
        string result;
        for(auto i= 0; i < mystack.size(); i++)
        {
            result += '/' + mystack[i];
        }
        return result == "" ? "/" : result;
    }
};



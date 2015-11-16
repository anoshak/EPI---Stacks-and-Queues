/*
 * Q5_BST_sorted.cpp
 *
 *  Created on: Nov 16, 2015
 *      Author: Anoshak
 */

#include "common_utils.h"

class Solution {
struct TreeNode {
	 int val;
	 TreeNode *left;
	 TreeNode *right;
	 TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	 };
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> mystack;
        vector<int> result;
        while(1)
        {
            while(root)
            {
                mystack.push(root);
                root = root->left;
            }
            if(mystack.empty())
                return result;
            root = mystack.top();
            mystack.pop();
            result.push_back(root->val);
            root = root->right;
        }
    }
};




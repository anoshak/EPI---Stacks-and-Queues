/*
 * Q9_Binary_tree_level_order.cpp
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> myqueue;
        int count = 0;
        if(root)
        {
            myqueue.push(root);
            count = 1;
        }
        vector<vector<int> > result;
        vector<int> temp;
        while(count)
        {
            while(count--)
            {
                TreeNode* t = myqueue.front();
                myqueue.pop();
                if(t->left)
                    myqueue.push(t->left);
                if(t->right)
                    myqueue.push(t->right);
                temp.push_back(t->val);
            }
            result.push_back(temp);
            temp.clear();
            count = myqueue.size();
        }
        return result;
    }
};




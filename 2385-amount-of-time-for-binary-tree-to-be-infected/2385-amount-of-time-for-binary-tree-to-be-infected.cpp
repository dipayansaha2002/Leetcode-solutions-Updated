/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,int> getPath(TreeNode *root, int start, int &result) {
        
        if(!root) {
            return {0,0};
        }

        pair<int,int> left = getPath(root->left,start,result);
        pair<int,int> right = getPath(root->right,start,result);

        if(root->val == start) {
            result = max(left.second,right.second);
            return {1,1};
        } else if(left.first == 1) {
            result = max(result,left.second+right.second);
            return {1,left.second+1};
        } else if(right.first == 1) {
            result = max(result,left.second+right.second);
            return {1,right.second+1};
        } else {
            return {0, max(left.second,right.second) + 1};
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        int result = 0;
        getPath(root,start, result);
        return result;
    }
};
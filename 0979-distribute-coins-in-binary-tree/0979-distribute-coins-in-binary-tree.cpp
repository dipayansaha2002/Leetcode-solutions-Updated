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
    int res = 0;
    int distributeCoins(TreeNode* root) {
        traversal(root);
        return res;
    }
    int traversal(TreeNode* root)
    {
        if(root->left)
            root->val += traversal(root->left);
        if(root->right)
            root->val += traversal(root->right);
        int temp = root->val -1;
        res += abs(temp);
        return temp;
            
    }
};
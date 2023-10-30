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
    bool identicalorNot(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        else if (p == NULL || q == NULL)
            return false;
        else {
            bool l = identicalorNot(p->left, q->left);
            bool r = identicalorNot(p->right, q->right);
            return l && r && (p->val == q->val);
        }
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return identicalorNot(p, q);
    }
};
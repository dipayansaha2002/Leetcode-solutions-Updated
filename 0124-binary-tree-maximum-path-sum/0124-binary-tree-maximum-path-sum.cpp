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
//  */
// struct node {
//   int data;
//   struct node * left, * right;
// };
// struct node * newNode(int data) {
//   struct node * node = (struct node * ) malloc(sizeof(struct node));
//   node -> data = data;
//   node -> left = NULL;
//   node -> right = NULL;

//   return (node);
// }
class Solution {
public:
int maxPathSum(TreeNode* root) {
    int ans = INT_MIN;
    chk(root, ans);
    return ans;
}
int chk(TreeNode* root, int& ans){
    if(root == NULL){
        return 0;
    }
    int lheight = max(0, chk(root->left, ans));
    int rheight = max(0, chk(root->right, ans));
    //int val = root->data ;
    ans = max(ans , lheight + rheight + root->val);
    return root->val + max(lheight, rheight);
}
};
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
#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    using int2 = array<int,2>;
    int ans=0;
    int2 dfs(TreeNode* root){
        if (!root)
        return {INT_MAX, INT_MIN};
        int2 left = dfs(root->left);
        int2 right = dfs(root->right);
        int x = root->val;
        int min_ = min({x, left[0], right[0]});
        int max_ = max({x, left[1], right[1]});
        ans = max({ans, x-min_, max_-x});
        return {min_, max_};
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root);
        return ans;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
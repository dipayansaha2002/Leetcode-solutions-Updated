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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result ;
        if(root==NULL){
            return result;
        }
        bool lefttoRight = true;//initialising flag true
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){//iterates until the queue becomes empty
            int size = q.size();
            vector<int> row(size);
            
            for(int i=0;i<size;i++){// iterates over all the nodes
               TreeNode* node = q.front();
                q.pop();
            int id = (lefttoRight)?i:(size-1-i);// finding posn
            row[id]= node->val;// Put the node val into the row[ind]
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
            }
            lefttoRight = !lefttoRight;// changing flag
            //bool lefttoRight = false;
                result.push_back(row);//res contains multiple rows
            }
        return result;
    }
};
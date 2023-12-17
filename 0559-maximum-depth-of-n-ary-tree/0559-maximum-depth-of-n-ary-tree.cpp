/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

// class Node {
// public:
//     int val;
//     vector<Node*> children;

//     Node(int value) : val(value), children() {}
// };

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) {
            return 0;
        }

        int maxChildDepth = 0;

        for (Node* child : root->children) {
            int childDepth = maxDepth(child);
            maxChildDepth = max(maxChildDepth, childDepth);
        }

        return 1 + maxChildDepth;
    }
};
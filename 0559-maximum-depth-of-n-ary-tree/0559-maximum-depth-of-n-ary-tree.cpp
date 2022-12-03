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

class Solution {
public:
    int maxi=0;
    void solve(Node* root, int d)
    {
        if(!root)
        return;
        
        d++;
        maxi=max(maxi,d);
        
        for(auto r:root->children)
        solve(r,d);
    }
    
    int maxDepth(Node* root) {
        solve(root,0);
        return maxi;
    }
};
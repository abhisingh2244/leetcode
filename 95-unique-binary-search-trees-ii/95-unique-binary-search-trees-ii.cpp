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
    vector<TreeNode*> generateTrees(int end, int start=1) {
        vector<TreeNode*> answer;
        if(start>end){  
            answer.push_back(NULL);
            return answer;
        }
        for(int i=start; i<=end; i++){
            auto left=generateTrees(i-1, start);
            auto right=generateTrees(end, i+1);
            for(auto l: left)
                for(auto r: right){
                    TreeNode* root = new TreeNode(i, l, r);
                    answer.push_back(root);
                }
        }
        return answer;
    }
};
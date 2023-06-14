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
    void res(TreeNode* root, vector<int>& vec, int ans){
        if(!root){
            // vec.push_back(root->val);
            
            return;
        }
        if(ans == vec.size())
            vec.push_back(root->val); // If current level is seen for the first time
        else      
            vec[ans] += root->val;
        
        res(root->left,vec,ans+1);
        res(root->right, vec,ans+1);

    }
    int deepestLeavesSum(TreeNode* root) {

        vector<int> vec;
        int ans = 0;

        res(root, vec,ans);
        return vec[vec.size()-1];
        
    }
};
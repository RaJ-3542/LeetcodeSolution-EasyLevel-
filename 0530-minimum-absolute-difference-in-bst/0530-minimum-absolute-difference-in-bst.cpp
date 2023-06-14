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

    void inserrt(TreeNode* root, vector<int>& vec){
        if(root == NULL){
            return;
        }
        inserrt(root->left, vec);
        // cout<<root->val<<endl;
        vec.push_back(root->val);
        // cout<<<<endl;
        inserrt(root->right, vec);

    }
    int getMinimumDifference(TreeNode* root) {

        vector<int> vec;
        inserrt(root,vec);
        int res = INT_MAX;
        for(int i = 1 ; i<vec.size();i++){

            res = min(res,abs(vec[i]-vec[i-1]));

        }

        return res;

        
    }
};
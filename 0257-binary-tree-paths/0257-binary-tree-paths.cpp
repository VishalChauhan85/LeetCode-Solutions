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
    void solve(vector<string>& ans,string s,TreeNode* root){
        if(root==NULL){
            ans.push_back(s);
            return;
        }

        if(s=="")s=to_string(root->val);
        else s+="->"+to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(s);
        }

        if(root->left!=NULL){
            solve(ans,s,root->left);
        }
        if(root->right!=NULL){
            solve(ans,s,root->right);
        }
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";

        solve(ans,s,root);
        return ans;
    }
};
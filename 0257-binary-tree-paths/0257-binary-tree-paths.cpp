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
    void solve(vector<string>& ans,string& s,TreeNode* root){
        if(root==NULL)return;

        int n=s.size();
        if(s=="")s=to_string(root->val);
        else s+="->"+to_string(root->val);

        if(root->left==NULL && root->right==NULL){
            ans.push_back(s);
        }else{
            solve(ans,s,root->left);
            solve(ans,s,root->right);
        }
        s.resize(n);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string s="";

        solve(ans,s,root);
        return ans;
    }
};
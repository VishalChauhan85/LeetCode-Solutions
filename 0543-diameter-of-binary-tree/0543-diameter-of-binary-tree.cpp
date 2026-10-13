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
    int length(TreeNode* root,vector<int>& v){
        if(root==NULL)return 0;
        int l=length(root->left,v)+1;
        int r=length(root->right,v)+1;
        v.push_back(l+r-1);  
        return max(l,r);      
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        vector<int> v;
        int l=length(root->left,v)+1;
        int r=length(root->right,v)+1;
        v.push_back(l+r-1);
        length(root,v);

        int ans=0;
        for(int i:v)ans=max(ans,i-1);
        return ans;
    }
};
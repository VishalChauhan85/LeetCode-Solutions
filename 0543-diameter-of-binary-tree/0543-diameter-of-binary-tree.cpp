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
    int length(TreeNode* root,int& ma){
        if(root==NULL)return 0;
        int l=length(root->left,ma);
        int r=length(root->right,ma);
        ma=max(ma,l+r);  
        return max(l,r)+1;      
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        int ma=0;
        length(root,ma);
        
        return ma;
    }
};
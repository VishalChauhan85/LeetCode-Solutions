/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)return NULL;
        
        TreeNode* a1=lowestCommonAncestor(root->left,p,q);
        TreeNode* a2=lowestCommonAncestor(root->right,p,q);
        if(root==p)a1=root;
        if(root==q)a2=root;

        if(a1!=NULL && a2!=NULL)return root;
        else if(a1!=NULL)return a1;
        else if(a2!=NULL)return a2;
        else return NULL;
    }
};
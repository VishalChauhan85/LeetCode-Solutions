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
    TreeNode* prev=NULL;
    TreeNode* first=NULL;
    TreeNode* sec=NULL;
    void solve(TreeNode* root){
        if(root->left)solve(root->left);
        if(prev!=NULL){
            if(prev->val>root->val){
                if(first!=NULL){
                    sec=root;
                    return;
                }else{
                    first=prev;
                    sec=root;
                }
            }
        }
        prev=root;
        if(root->right)solve(root->right);
    }
    void recoverTree(TreeNode* root) {
        solve(root);
        swap(first->val,sec->val);
    }
};
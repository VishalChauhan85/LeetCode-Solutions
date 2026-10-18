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
    TreeNode* build(vector<int>& v,int p1,int p2,int& inx){
        if(v.size()<=inx)return NULL;
        if(v[inx]>p2 || v[inx]<p1)return NULL;

        TreeNode* root=new TreeNode(v[inx++]);
        root->left=build(v,p1,root->val,inx);
        root->right=build(v,root->val,p2,inx);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int inx=0;
        return build(preorder,INT_MIN,INT_MAX,inx);
    }
};
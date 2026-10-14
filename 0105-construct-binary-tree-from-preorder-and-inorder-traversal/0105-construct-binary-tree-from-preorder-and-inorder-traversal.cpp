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
    unordered_map<int,int> m;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& inx,int l,int r){
        if(l>r)return NULL;

        TreeNode* Node=new TreeNode(preorder[inx]);
        int num=m[preorder[inx]];
        inx++;

        Node->left=build(preorder,inorder,inx,l,num-1);
        Node->right=build(preorder,inorder,inx,num+1,r);

        return Node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inx=0;
        int n=inorder.size();
        for(int i=0;i<n;i++)m[inorder[i]]=i;
        TreeNode* ans=build(preorder,inorder,inx,0,preorder.size()-1);
        return ans;
    }
};
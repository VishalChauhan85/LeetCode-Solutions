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
    int search(vector<int>& inorder,int& num,int left,int right){
        int n=inorder.size();
        for(int i=left;i<=right;i++){
            if(inorder[i]==num)return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int& inx,int l,int r){
        if(l>r)return NULL;

        TreeNode* Node=new TreeNode(preorder[inx]);
        int num=search(inorder,preorder[inx],l,r);
        inx++;

        Node->left=build(preorder,inorder,inx,l,num-1);
        Node->right=build(preorder,inorder,inx,num+1,r);

        return Node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inx=0;
        TreeNode* ans=build(preorder,inorder,inx,0,preorder.size()-1);
        return ans;
    }
};
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
    TreeNode* convert(vector<int>& nums,int left,int right){
        if(left>right)return NULL;

        int a=left+(right-left)/2;
        TreeNode* mid=new TreeNode(nums[a]);
        mid->left=convert(nums,left,a-1);
        mid->right=convert(nums,a+1,right);

        return mid; 
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,0,nums.size()-1);
    }
};
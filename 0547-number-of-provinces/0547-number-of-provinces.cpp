class Solution {
public:
    void dfs(auto& nums,auto& v,int i){
        v[i]=true;
        for(int j=0;j<nums.size();j++){
            if(nums[i][j]==1 && v[j]==false){
                dfs(nums,v,j);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<bool> v(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(!v[i]){
                dfs(nums,v,i);
                ans++;
            }
        }
        return ans;
    }
};
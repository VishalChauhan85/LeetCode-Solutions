class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<bool> v(n+1,true); 
        for(int i:nums)v[i]=false;

        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(v[i])ans.push_back(i);
        }
        return ans;
    }
};
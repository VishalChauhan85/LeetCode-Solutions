class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<bool> v(n+1,false);
        vector<int> ans;
        
        for(int i:nums){
            if(v[i]==true)ans.push_back(i);
            else v[i]=true;
        }

        return ans;
    }
};
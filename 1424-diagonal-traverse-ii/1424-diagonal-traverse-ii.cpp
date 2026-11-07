class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        int n=nums.size();
        int num=0;
        vector<int> ans;
        unordered_map<int,vector<int>> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].size();j++){
                num=max(num,i+j);
                m[i+j].push_back(nums[i][j]);
            }
        }

        for(int i=0;i<=num;i++){
            for(auto a=m[i].rbegin();a!=m[i].rend();a++)ans.push_back(*a);
        }

        return ans;
    }
};
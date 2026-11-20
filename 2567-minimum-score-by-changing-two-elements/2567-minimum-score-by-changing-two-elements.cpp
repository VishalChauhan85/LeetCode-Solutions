class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n=nums.size();
        if(n<=3)return 0;

        sort(nums.begin(),nums.end());
        int a1=nums[n-3]-nums[0];
        int a2=nums[n-2]-nums[1];
        int a3=nums[n-1]-nums[2];

        return min({a1,a2,a3});
    }
};
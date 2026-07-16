class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int xMax=INT_MIN;
        for(int& x: nums){
            xMax=max(x, xMax);
            x=gcd(x, xMax);
        }
        sort(nums.begin(),nums.end());

        long long ans=0;
        for(int i=0,j=n-1;i<j;i++,j--){
            ans+=gcd(nums[i],nums[j]);
        }
        return ans;
    }
};
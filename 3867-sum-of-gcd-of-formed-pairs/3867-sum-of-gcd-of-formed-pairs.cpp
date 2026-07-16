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
        int p1=0;
        int p2=n-1;

        while(p1<p2){
            ans+=gcd(nums[p1],nums[p2]);
            p1++;p2--;
        }
        return ans;
    }
};
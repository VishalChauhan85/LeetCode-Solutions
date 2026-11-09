class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int minsum=0;
        int maxsum=0;

        int maxans=INT_MIN;
        int minans=0;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            minsum+=nums[i];
            maxsum+=nums[i];

            maxans=max(maxans,maxsum);
            minans=min(minans,minsum);

            if(minsum>0)minsum=0;
            if(maxsum<0)maxsum=0;
        }

        if(maxans<0)return maxans;
        return max(maxans,(sum-minans));
    }
};
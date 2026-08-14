class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();

        int sum=accumulate(nums.begin(), nums.end(), 0);
        if(k==n)return sum;
        int rem=0;
        int win=n-k;

        for(int i=0;i<win;i++)rem+=nums[i];
        int ans=rem;

        for(int i=win;i<n;i++){
            rem+=nums[i];
            rem-=nums[i-win];
            cout<<rem<<endl;

            ans=min(ans,rem);
        }

        return sum-ans;

        
    }
};
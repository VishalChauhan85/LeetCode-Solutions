class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int mi=INT_MAX;

        for(int i=0;i<n;i++){
            ans+=nums[i];
            mi=min(mi,nums[i]);
        }

        ans-=(mi*n);
        return ans;

    }
};
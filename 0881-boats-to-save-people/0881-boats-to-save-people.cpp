class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=n;

        int p1=0;
        int p2=n-1;
        while(p1<p2){
            if(nums[p1]+nums[p2]<=k){
                ans--;
                p1++;
                p2--;
            }else p2--;
        }

        return ans;
        
    }
};
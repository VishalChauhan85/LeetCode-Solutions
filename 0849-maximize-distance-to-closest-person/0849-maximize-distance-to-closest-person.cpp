class Solution {
public:
    int maxDistToClosest(vector<int>& nums) {
        int n=nums.size();
        int last=-1;
        int ans=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                if(last==-1){
                    ans=i;
                }else ans=max(ans,(i-last)/2);
                last=i;
            }
        }

        ans=max(ans,(n-last-1));
        return ans;
    }
};
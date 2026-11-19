class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int count1=0;
        int count2=0;

        for(int j:nums){
            if(j){
                count1++;
                count2++;
            }else{
                count1=count2;
                count2=0;
            }

            ans=max(ans,count1);
        }
        if(ans==n)return ans-1;
        return ans;
    }
};
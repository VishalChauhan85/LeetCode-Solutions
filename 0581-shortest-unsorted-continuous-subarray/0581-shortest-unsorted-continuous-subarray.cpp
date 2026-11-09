class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        
        int end=-1;
        int val=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>=val)val=nums[i];
            else end=i;
        }
        if(end==-1)return 0;

        int st=0;
        val=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=val)val=nums[i];
            else st=i;
        }

        return end-st+1;
    }
};
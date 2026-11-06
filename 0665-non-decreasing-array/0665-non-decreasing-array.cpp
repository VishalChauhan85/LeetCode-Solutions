class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        bool ask=false;

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                if(ask)return false;
                else {
                    if(ask ||i>1 && i<n-1 && nums[i-2]>nums[i] && nums[i+1]<nums[i-1])return false;
                    else ask=true;
                }
            }
        }

        return true;
    }
};
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();
        int i=0;

        int count=0;
        int temp=0;
        for(int j=0;j<n;j++){
            if(nums[j]==0)count++;
            temp++;
            while(count>k){
                if(nums[i]==0)count--;
                temp--;
                i++;
            }
            ans=max(ans,temp);
        }

        return ans;
    }
};
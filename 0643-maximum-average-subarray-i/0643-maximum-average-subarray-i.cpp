class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double num=0;
        for(int i=0;i<k;i++)num+=nums[i];
        double ans=num;
        
        for(int p2=k;p2<n;p2++){
            num=num+nums[p2]-nums[p2-k];
            ans=max(ans,num);
        }

        return ans/k;
    }
};
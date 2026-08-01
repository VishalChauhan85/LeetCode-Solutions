class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int p1=0;
        int p2=k;

        double num=0;
        for(int i=0;i<k;i++)num+=nums[i];
        double ans=num;
        
        for(p2;p2<n;p2++,p1++){
            num=num+nums[p2]-nums[p1];
            ans=max(ans,num);
        }

        return ans/k;
    }
};
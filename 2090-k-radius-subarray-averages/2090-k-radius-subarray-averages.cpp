class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if(k==0)return nums;
        int n=nums.size();
        vector<int> v(n,-1);
        long long sum=0;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(i==(2*k))v[k]=sum/((2*k)+1);
            if(i<=(2*k))continue;
            sum-=nums[i-(2*k)-1];
            v[i-k]=sum/((2*k)+1);
        }

        return v;
    } 
};
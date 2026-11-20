class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n=nums.size();
        unordered_map<int,int> m;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
            m[nums[i]]++;
        }
        if(m.size()==k)ans=sum;

        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            m[nums[i]]++;
            m[nums[i-k]]--;
            if(m[nums[i-k]]==0)m.erase(nums[i-k]);
            if(m.size()==k)ans=max(ans,sum);
        }

        return ans;

    }
};
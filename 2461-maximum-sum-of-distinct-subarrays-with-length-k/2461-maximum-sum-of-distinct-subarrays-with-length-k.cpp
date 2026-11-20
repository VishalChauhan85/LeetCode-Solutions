class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n=nums.size();
        unordered_map<int,int> m;
        long long i=0;
        long long sum=0;
        long long ans=0;

        for(int j=0;j<n;j++){
            sum+=nums[j];
            m[nums[j]]++;

            while(m[nums[j]]>2 || (j-i+1)>k){
                sum-=nums[i];
                m[nums[i]]--;
                if(m[nums[i]]==0)m.erase(nums[i]);
                i++;
            }

            if(m.size()==k)ans=max(ans,sum);
        }

        return ans;
    }
};
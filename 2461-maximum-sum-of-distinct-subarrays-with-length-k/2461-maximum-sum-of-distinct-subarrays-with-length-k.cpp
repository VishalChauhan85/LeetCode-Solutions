class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        int i=0;
        long long sum=0;
        long long ans=0;

        for(int j=0;j<n;j++){
            sum+=nums[j];
            m[nums[j]]++;

            while(m[nums[j]]>1 || (j-i+1)>k){
                sum-=nums[i];
                m[nums[i]]--;
                i++;
            }

            if((j-i+1)==k)ans=max(ans,sum);
        }

        return ans;
    }
};
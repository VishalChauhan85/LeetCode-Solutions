class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size();
        int i=0;
        int sum=0;
        int ans=0;

        for(int j=0;j<n;j++){
            sum+=nums[j];
            m[nums[j]]++;

            while(m[nums[j]]>1){
                m[nums[i]]--;
                sum-=nums[i];
                i++;
            }

            ans=max(ans,sum);
        }

        return ans;


    }
};
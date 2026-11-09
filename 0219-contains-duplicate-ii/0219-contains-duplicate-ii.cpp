class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> m;
        k=min(k,n-1);
        for(int i=0;i<=k;i++){
            m[nums[i]]++;
            if(m[nums[i]]>1)return true;
        }

        for(int i=k+1;i<n;i++){
            m[nums[i]]++;
            m[nums[i-k-1]]--;

            if(m[nums[i]]>1)return true;
        }

        return false;
    }
};
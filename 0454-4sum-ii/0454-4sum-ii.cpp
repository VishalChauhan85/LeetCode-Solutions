class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans=0;
        unordered_map<int,int> m;
        for(auto& a:nums1){
            for(auto& b:nums2){
                m[a+b]++;
            }
        }

        for(auto& a:nums3){
            for(auto& b:nums4){
                ans+=m[0-(a+b)];
            }
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1;
        for(int i:nums1)m1[i]++;

        unordered_map<int,int> m2;
        for(int i:nums2)m2[i]++;

        vector<int> ans;
        for(auto a:m1){
            if(m2[a.first]!=0)ans.push_back(a.first);
        }        

        return ans;
    }
};
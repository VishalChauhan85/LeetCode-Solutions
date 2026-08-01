class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        vector<int> v;
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }

        for(auto a:m){
            if(a.second>(n/3)){
                v.push_back(a.first);
            }
        }

        return v;
    }
};
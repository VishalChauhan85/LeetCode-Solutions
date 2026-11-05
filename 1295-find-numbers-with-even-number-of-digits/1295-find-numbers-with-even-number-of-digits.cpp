class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            string s=to_string(i);
            if(!(s.size()%2))ans++;
        }
        return ans;
    }
};
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int num=0;
            while(i>0){
                num++;
                i/=10;
            }
            if(!(num%2))ans++;
        }
        return ans;
    }
};
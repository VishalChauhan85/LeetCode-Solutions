class Solution {
public:
    int rob(vector<int>& nums) {
        int p1=0;
        int p2=0;

        for(int num:nums){
            int temp=p1;
            p1=max(p2+num,p1);
            p2=temp;
        }

        return p1;
    }
};
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int odd=INT_MAX;
        int even=INT_MAX;

        for(int i:nums1){
            if(i%2)odd=min(odd,i);
            else even=min(even,i);
        }

        if(odd==INT_MAX || even==INT_MAX || even>odd)return true;
        return false;
    }
};
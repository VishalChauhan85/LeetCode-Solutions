class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p1=nums[0];
        int p2=nums[1];
        int n=nums.size();

        for(int i=2;i<n;i++){
            if(p1<p2)swap(p1,p2);
            p2=max(p2,nums[i]);
        }

        return (p1-1)*(p2-1);
    }
};
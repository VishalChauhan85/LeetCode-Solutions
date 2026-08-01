class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num=nums[0];
        int inx=1;

        for(int i=0;i<n;i++){
            if(nums[i]==num)inx++;
            else inx--;

            if(inx<1){
                inx=1;
                num=nums[i];
            }
        }

        return num;
    }
};
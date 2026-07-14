class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return 0;

        int p1=0;
        int p2=n-1;

        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;

        while(p1<=p2){
            if(nums[p1+1]<nums[p1])return p1;
            if(nums[p2]>nums[p2-1])return p2;
            int mid=p1+(p2-p1)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            else if(nums[mid]<nums[mid+1])p1=mid+1;
            else if(nums[mid]<nums[mid-1])p2=mid-1;
        }
        return -1;
    }
};
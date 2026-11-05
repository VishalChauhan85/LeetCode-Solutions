class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        int p1=0;
        int p2=n-1;
        while(p1<p2){
            while(p1<n && (nums[p1]%2)==0)p1++;
            while(p2>=0 && (nums[p2]%2))p2--;

            if(p1>=p2)break;
            swap(nums[p1],nums[p2]);
            p1++;
            p2--;
        }

        return nums;        
    }
};
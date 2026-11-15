class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int count=n;
        for(int i=0;i<n;i++){
            int ans=nums[i];
            int m=nums[i];
            for(int j=i+1;j<n;j++){
                ans&=nums[j];
                m=min(m,nums[j]);
                if(m==ans)count++;
            }
        }
        return count;
    }
};
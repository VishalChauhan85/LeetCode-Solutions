class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int count=0;
        
        vector<int> m(n+1,0);
        m[0]=1;

        for(int i=0;i<n;i++){
            count+=(nums[i]%2);
            if(count-k>=0){
                ans+=m[count-k];
            }
            m[count]++;
        }

        return ans;
    }
};
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        vector<int> gc(n);

        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=max(prefix[i-1],nums[i]);
        }
        
        for(int i=0;i<n;i++){
            gc[i]=gcd(prefix[i],nums[i]);
        }

        sort(gc.begin(),gc.end());

        long long ans=0;
        int p1=0;
        int p2=n-1;

        while(p1<p2){
            ans+=gcd(gc[p1],gc[p2]);
            p1++;p2--;
        }
        return ans;
    }
};
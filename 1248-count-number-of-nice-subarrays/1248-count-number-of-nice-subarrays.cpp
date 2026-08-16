class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        int count=0;
        
        unordered_map<int,int> m;
        m[0]=1;

        for(int i=0;i<n;i++){
            count+=(nums[i]%2);
            if(m.find(count-k)!=m.end()){
                ans+=m[count-k];
            }
            m[count]++;
        }

        return ans;
    }
};
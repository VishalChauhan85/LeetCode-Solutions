class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        int n=v.size();
        int ans=0;

        for(int i=0;i<n;i++){
            if(i<k)ans+=min(v[k],v[i]);
            else if(i==k)ans+=v[k];
            else ans+=min(v[k]-1,v[i]);
        }

        return ans;
    }
};
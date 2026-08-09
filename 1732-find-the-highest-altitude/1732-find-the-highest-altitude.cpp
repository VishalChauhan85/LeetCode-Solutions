class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int ans=0;
        int num=ans;

        for(int i=0;i<n;i++){
            num+=gain[i];
            ans=max(ans,num);
        }

        return ans;
        
    }
};
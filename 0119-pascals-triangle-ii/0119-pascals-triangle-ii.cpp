class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans={1};

        for(int i=1;i<=n;i++){
            vector<int> again;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i)again.push_back(1);
                else again.push_back(ans[j]+ans[j-1]);
            }
            ans=again;
        }

        return ans;
    }
};
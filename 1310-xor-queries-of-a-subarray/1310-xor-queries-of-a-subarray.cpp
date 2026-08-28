class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> v(n+1,0);
        
        for(int i=1;i<=n;i++){
            v[i]=v[i-1]^arr[i-1];
        }

        int m=queries.size();
        vector<int> ans(m,0);
        for(int i=0;i<m;i++){
            int l=queries[i][0];
            int r=queries[i][1]+1;
            ans[i]=v[l]^v[r];
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++){
            v[i]=v[i-1]^arr[i-1];
        }

        vector<int> ans(queries.size(),0);
        int m=queries.size();
        for(int i=0;i<m;i++){
            ans[i]=v[queries[i][0]]^v[queries[i][1]+1];
        }

        return ans;
    }
};
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int> v(n+1,0);
        vector<int> ans;
        ans.reserve(queries.size());
        
        for(int i=1;i<=n;i++)v[i]=v[i-1]^arr[i-1];
        for(const auto& a:queries)ans.push_back(v[a[0]]^v[a[1]+1]);
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>> v(n+1,vector<int> (m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                v[i][j]=mat[i-1][j-1]+v[i-1][j]+v[i][j-1]-v[i-1][j-1];
            }
        }
        vector<vector<int>> ans(n,vector<int> (m,0));
        for(int i=1;i<=n;i++){
            int row1=max(0,i-k-1);
            int row2=min(n,i+k);
            for(int j=1;j<=m;j++){
                int col1=max(0,j-k-1);
                int col2=min(m,j+k);
                ans[i-1][j-1]=v[row2][col2]-v[row1][col2]-v[row2][col1]+v[row1][col1];
            }
        }

        return ans;
    }
};
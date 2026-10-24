class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& v,int i,int j,int num){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)return;

        if(v[i][j]>num)v[i][j]=num;
        else return;

        dfs(grid,v,i+1,j,num+1);
        dfs(grid,v,i-1,j,num+1);
        dfs(grid,v,i,j+1,num+1);
        dfs(grid,v,i,j-1,num+1);
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> v(n,vector<int> (m,INT_MAX));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)dfs(grid,v,i,j,0);
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<v[i][j]<<" ";
                if(grid[i][j]!=0)ans=max(ans,v[i][j]);
            }
            cout<<endl;
        }

        if(ans==INT_MAX)return -1;
        return ans;


    }
};
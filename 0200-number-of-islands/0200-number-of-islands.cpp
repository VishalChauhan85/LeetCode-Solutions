class Solution {
public:
    void find(vector<vector<char>>& grid,vector<vector<bool>>& v,int i,int j){
        if(i<0 || i>=v.size() || j<0 || j>=v[0].size() || v[i][j]==true || grid[i][j]=='0')return;

        v[i][j]=true;
        find(grid,v,i+1,j);
        find(grid,v,i-1,j);
        find(grid,v,i,j+1);
        find(grid,v,i,j-1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;

        vector<vector<bool>> v(n,vector<bool> (m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==false && grid[i][j]=='1'){
                    find(grid,v,i,j);
                    ans++;
                }
                
            }
        }

        return ans;
        
    }
};
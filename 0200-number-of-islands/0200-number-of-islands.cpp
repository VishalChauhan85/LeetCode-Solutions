class Solution {
public:
    void find(vector<vector<char>>& grid,vector<vector<bool>>& v,int i,int j){
        if(grid.size()>(i+1))if(grid[i+1][j]=='1' && v[i+1][j]==false){
            v[i+1][j]=true;
            find(grid,v,i+1,j);
        }
        if(grid[0].size()>(j+1))if(grid[i][j+1]=='1' && v[i][j+1]==false){
            v[i][j+1]=true;
            find(grid,v,i,j+1);
        }

        if(i!=0)if(grid[i-1][j]=='1' && v[i-1][j]==false){
            v[i-1][j]=true;
            find(grid,v,i-1,j);
        }
        if(j!=0)if(grid[i][j-1]=='1' && v[i][j-1]==false){
            v[i][j-1]=true;
            find(grid,v,i,j-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;

        vector<vector<bool>> v(n,vector<bool> (m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==false && grid[i][j]=='1'){
                    v[i][j]==true;
                    find(grid,v,i,j);
                    ans++;
                }
                
            }
        }

        return ans;
        
    }
};
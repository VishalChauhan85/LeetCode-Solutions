class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int,int>> q;
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({i,j});
                else if(grid[i][j]==1)count++;
            }
        }

        int ans=0;
        while(!q.empty() && count!=0){
            ans++;
            int num=q.size();
            
            for(int i=0;i<num;i++){
                vector<int> col={0,0,-1,1};
                vector<int> row={-1,1,0,0};

                for(int j=0;j<4;j++){
                    int Row=q.front().first+row[j];
                    int Col=q.front().second+col[j];
                    if(Row<0 || Col<0 || Row>=n || Col>=m || grid[Row][Col]!=1)continue;

                    grid[Row][Col]=2;
                    q.push({Row,Col});
                    count--;
                }

                q.pop();
            }

        }

        if(count!=0)return -1;
        return ans;

    }
};
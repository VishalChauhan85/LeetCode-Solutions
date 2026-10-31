class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row;
        vector<int> cols;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row.push_back(i);
                    cols.push_back(j);
                }
            }
        }

        int last =-1;
        for(int i:row){
            if(i==last)continue;
            for(int j=0;j<m;j++){
                matrix[i][j]=0;
            }
            last=i;
        }

        last=-1;
        for(int j:cols){
            if(j==last)continue;
            for(int i=0;i<n;i++){
                matrix[i][j]=0;
            }
            last=j;
        }

    }
};
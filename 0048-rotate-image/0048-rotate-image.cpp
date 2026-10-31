class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<n;i++){
            int p1=0;
            int p2=n-1;
            while(p1<p2){
                swap(matrix[i][p1],matrix[i][p2]);
                p1++;
                p2--;
            }
        }
    }
};
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n1=matrix.size();
        int n=matrix[0].size();

        int ans=0;
        vector<int> v(n,0);

        for(int i=0;i<n1;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='0')v[j]=0;
                else v[j]++;
            }

            vector<int> left(n,-1);
            vector<int> right(n,n);
            stack<int> s;

            for(int j=0;j<n;j++){
                while(!s.empty() && v[s.top()]>=v[j]){
                    s.pop();
                }
                if(!s.empty())left[j]=s.top();
                s.push(j);
            }

            while(!s.empty())s.pop();

            for(int j=n-1;j>=0;j--){
                while(!s.empty() && v[s.top()]>=v[j]){
                    s.pop();
                }
                if(!s.empty())right[j]=s.top();
                s.push(j);
            }
            for(int i=0;i<n;i++){
                ans=max(ans,v[i]*(right[i]-left[i]-1));
            }
        }
        return ans;
    }
};
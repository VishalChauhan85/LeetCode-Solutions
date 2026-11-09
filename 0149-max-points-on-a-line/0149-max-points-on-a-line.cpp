class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans=0;
        int n=points.size();
        for(int i=0;i<n;i++){
            unordered_map<double,int> m;
            for(int j=i+1;j<n;j++){
                double up=points[i][0]-points[j][0];
                double down=points[i][1]-points[j][1];
                if(down==0){
                    m[abs(up/down)]++;
                    continue;
                }
                m[up/down]++;
            }
            for(auto a:m)ans=max(ans,a.second);
        }
        return ans+1;
    }
};
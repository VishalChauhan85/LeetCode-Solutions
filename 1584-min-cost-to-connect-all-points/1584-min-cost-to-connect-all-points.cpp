class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<bool> ask(n,false);

        vector<vector<pair<int,int>>> v(n);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int len=abs(points[i][0]-points[j][0]);
                len+=abs((points[i][1]-points[j][1]));
                v[i].push_back({len,j});
                v[j].push_back({len,i});
            }
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,0});

        int ans=0;
        while(!q.empty()){
            auto a=q.top();
            q.pop();
            if(ask[a.second])continue;
            ans+=a.first;
            ask[a.second]=true;

            for(auto i:v[a.second]){
                q.push(i);
            }
        }

        return ans;         
    }
};
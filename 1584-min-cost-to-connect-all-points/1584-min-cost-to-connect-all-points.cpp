class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<bool> ask(n,false);

        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> q;
        q.push({0,0});

        int ans=0;
        while(!q.empty()){
            auto a=q.top();
            q.pop();
            if(ask[a.second])continue;

            ans+=a.first;
            ask[a.second]=true;
            for(int i=0;i<n;i++){
                int num=abs(points[i][0]-points[a.second][0]);
                num+=abs(points[i][1]-points[a.second][1]);
                q.push({num,i});
            }
        }

        return ans;         
    }
};
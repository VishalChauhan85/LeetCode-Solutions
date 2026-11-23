class Solution {
public:
    int time;
    vector<int> dt,low;

    void dfs(int u,int par,vector<vector<int>>& graph,vector<vector<int>>& ans){
        dt[u]=low[u]=++time;

        for(const int& a:graph[u]){
            if(dt[a]==-1){
                dfs(a,u,graph,ans);
                low[u]=min(low[u],low[a]);

                if(low[a]>dt[u])ans.push_back({u,a});
            }else if(a!=par){
                low[u]=min(low[u],dt[a]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        time=0;
        dt.assign(n,-1);
        low.assign(n,0);

        vector<vector<int>> ans;
        vector<vector<int>> graph(n);
        for(const auto& a:connections){
            graph[a[0]].push_back(a[1]);
            graph[a[1]].push_back(a[0]);
        }

        dfs(0,-1,graph,ans);
        return ans;
    }
};
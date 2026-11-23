class Solution {
public:
    int time;
    vector<int> dt,low;

    void dfs(int u,int par,vector<bool>& vis,vector<vector<int>>& graph,vector<vector<int>>& ans){
        vis[u]=true;
        dt[u]=low[u]=++time;

        for(auto a:graph[u]){
            if(!vis[a]){
                dfs(a,u,vis,graph,ans);
                low[u]=min(low[u],low[a]);

                if(low[a]>dt[u])ans.push_back({u,a});
            }else if(a!=par){
                low[u]=min(low[u],dt[a]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        time=0;
        dt.assign(n,0);
        low.assign(n,0);

        vector<vector<int>> ans;
        vector<vector<int>> graph(n);
        for(auto a:connections){
            graph[a[0]].push_back(a[1]);
            graph[a[1]].push_back(a[0]);
        }
        vector<bool> vis(n,false);

        dfs(0,-1,vis,graph,ans);
        return ans;
    }
};
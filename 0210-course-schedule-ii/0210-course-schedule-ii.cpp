class Solution {
public:
    bool dfs(int i,vector<vector<int>>& graph,stack<int>& ans,vector<bool>& check,vector<bool>& path){
        path[i]=true;
        check[i]=true;
        for(int a:graph[i]){
            if(!check[a]){
                if(dfs(a,graph,ans,check,path))return true;
            }else if(path[a])return true;
        }
        path[i]=false;
        ans.push(i);
        return false;
    }
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<vector<int>> graph(n);
        for(const auto& a:p){
            graph[a[1]].push_back(a[0]);
        }

        stack<int> ans;
        vector<bool> check(n,false);
        vector<bool> path(n,false);
        vector<int> ret;

        for(int i=0;i<n;i++){
            if(!check[i]){
                if(dfs(i,graph,ans,check,path))return ret;
            }
        }

        while(!ans.empty()){
            ret.push_back(ans.top());
            ans.pop();
        }
        return ret;
    }
};
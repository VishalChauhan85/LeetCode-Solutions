class Solution {
public:
    bool dfs(int i,vector<vector<int>>& graph,vector<bool>& check,vector<bool>& path){
        path[i]=true;
        check[i]=true;

        for(auto a:graph[i]){
            if(!check[a]){
                if(dfs(a,graph,check,path))return true;
            }else if(path[a])return true;
        }
        path[i]=false;
        return false;

    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);

        for(const auto& i:prerequisites){
            graph[i[1]].push_back(i[0]);
        }
        vector<bool> check(numCourses,false);
        vector<bool> path(numCourses,false);
        for(int i=0;i<numCourses;i++){
            if(check[i]==false){
                if(dfs(i,graph,check,path))return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int> mincost(n,INT_MAX);
        vector<vector<pair<int,int>>> graph(n);
        for(auto a:flights)graph[a[0]].push_back({a[1],a[2]});

        queue<pair<int,int>> q;
        int num=0;
        q.push({src,0});

        while(!q.empty() && num<=k){
            int s=q.size();

            while(s--){
                auto [curr,cost]=q.front();
                q.pop();
                for(auto i:graph[curr]){
                    int price=i.second+cost;
                    if(mincost[i.first]>price){
                        mincost[i.first]=price;
                        q.push({i.first,price});
                    }
                }

            }
            num++;
        }

        if(mincost[dst]==INT_MAX)return -1;
        return mincost[dst];
        
    }
};
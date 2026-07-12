class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==2)return min(cost[0],cost[1]);

        int p1=cost[0];
        int p2=cost[1];

        for(int i=2;i<n;i++){
            int temp=p2;
            p2=cost[i]+min(p1,p2);
            p1=temp;
        }

        return min(p1,p2);
        
    }
};
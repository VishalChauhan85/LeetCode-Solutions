class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i:nums)m[i]++;

        vector<int> ans;
        priority_queue<pair<int,int>> q;
        for(auto a:m)q.push({a.second,a.first});

        int n=0;
        while(n<k){
            ans.push_back(q.top().second);
            q.pop();
            n++;
        }
        return ans;
    }
};
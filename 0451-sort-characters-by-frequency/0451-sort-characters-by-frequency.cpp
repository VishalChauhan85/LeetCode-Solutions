class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        for(char ch:s)m[ch]++;
        priority_queue<pair<int,char>,vector<pair<int,char>>> heap;
        for(auto a:m)heap.push({a.second,a.first});


        string ans="";
        while(!heap.empty()){
            ans.append(heap.top().first,heap.top().second);
            heap.pop();
        }

        return ans;
    }
};
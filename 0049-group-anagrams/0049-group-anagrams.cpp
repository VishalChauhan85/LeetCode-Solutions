class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;

        for(const string& s:strs){
            string a=s;
            sort(a.begin(),a.end());
            m[a].push_back(s);
        }

        vector<vector<string>> ans;
        for(const auto& a:m)ans.push_back(a.second);

        return ans;
    }
};
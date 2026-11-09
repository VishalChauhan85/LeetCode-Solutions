class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> v(26,0);
        for(char ch:text)v[ch-'a']++;

        int ans=INT_MAX;
        ans=min({ans,v[0],v[1],v['n'-'a'],v['l'-'a']/2,v['o'-'a']/2});
        return ans;

    }
};
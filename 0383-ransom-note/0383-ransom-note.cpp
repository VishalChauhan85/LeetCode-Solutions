class Solution {
public:
    bool canConstruct(string ra, string ma) {
        vector<int> v(26,0);
        for(char ch:ma)v[ch-'a']++;

        for(char ch:ra){
            if(v[ch-'a']==0)return false;
            v[ch-'a']--;
        }

        return true;
    }
};
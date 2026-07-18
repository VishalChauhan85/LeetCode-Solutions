class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26,0);

        if(s.size()!=t.size())return false;

        for(char c:s){
            v1[c-'a']++;
        }
        for(char c:t){
            v1[c-'a']--;
            if(v1[c-'a']==-1)return false;
        }

        return true;
    }
};
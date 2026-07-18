class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }

        for(char c:t){
            v[c-'a']--;
            if(v[c-'a']==-1)return c;
        }

        return ' ';
    }
};
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p1=0;
        for(char ch:t){
            if(ch==s[p1])p1++;
        }

        if(p1==s.size())return true;
        return false;
    }
};
class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n=s.size();

        for(char c:t){
            if(c==s[i])i++;
            i=max(i,j+1);

            if(s[j]==c)j++;
            if(j==n || i==n)return true;
        }

        return false;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int ans=0;
        int i=0;
        reverse(s.begin(),s.end());
        while(i<n && s[i]==' ')i++;
        while(i<n && s[i++]!=' ')ans++;
        return ans;
    }
};
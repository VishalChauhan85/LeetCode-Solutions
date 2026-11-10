class Solution {
public:
    bool v(string& s,int p1, int p2){
        while(p1<p2){
            if(s[p1]!=s[p2])return false;
            p1++;
            p2--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int p1=0;
        int p2=s.size()-1;

        while(p1<p2){
            if(s[p1]!=s[p2]){
                return v(s,p1+1,p2) ||v(s,p1,p2-1);
            }
            p1++;
            p2--;
        }
        return true;
    }
};
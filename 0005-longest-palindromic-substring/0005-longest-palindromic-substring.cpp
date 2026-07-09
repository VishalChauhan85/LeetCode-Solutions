class Solution {
public:
    string ask(int p1,int p2,string& s){
        int n=s.size();
        if(s[p1]!=s[p2])return "";
        int ans=p2-p1+1;
        while(p1>=0 && p2<n){
            if(s[p1]==s[p2]){
                ans+=2;
                p1--;p2++;
            }else{
                break;
            }
        }
        return s.substr(p1+1,p2-p1-1);
    }
    string longestPalindrome(string s) {
        int n=s.size();
        if(n<2)return s;

        int ans=1;
        string s1=ask(0,0,s);
        for(int i=1;i<n;i++){
            string test=ask(i,i,s);
            int comp=test.size();
            if(comp>ans){
                ans=comp;
                s1=test;
            }

            test=ask(i-1,i,s);
            comp=test.size();
            if(comp>ans){
                ans=comp;
                s1=test;
            }

        }
        return s1;

    }

};
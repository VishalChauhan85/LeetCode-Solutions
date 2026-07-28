class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        
        map<char,int> m;
        for(char ch:s){
            m[ch]++;
        }   

        string s1="";
        string s2="";

        for(auto a:m){
            if(a.second%2){
                s2=a.first;
            }
            int num=a.second/2;
            while(num--)s1+=a.first;
        }

        string ans=s1+s2;
        reverse(s1.begin(),s1.end());

        return ans+s1;
    }
};
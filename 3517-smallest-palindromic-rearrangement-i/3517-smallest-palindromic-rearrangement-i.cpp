class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        
        vector<int> v(26);
        for(int i=0;i<n/2;i++){
            v[s[i]-'a']++;
        }

        int p1=0;
        int p2=n-1;
        for(int i=0;i<26;i++){
            while(v[i]--){
                char ch=char(i+'a');
                s[p1++]=ch;
                s[p2--]=ch;
            }
        }

        return s;
    }
};
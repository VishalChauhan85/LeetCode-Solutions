class Solution {
public:
    long long countValidSubstrings(string s) {
        long long n=s.size();
        long long ans=0;
        long long last=-1;
        for(int i=0;i<n;i++){
            if(i>=2 && s[i]=='c' && s[i-1]=='b' && s[i-2]=='a'){
                last=i-2;
            }
            ans+=i-last;
        }

        return ans;
    }
};
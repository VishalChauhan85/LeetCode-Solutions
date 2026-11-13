class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int ans=0;
        int num=1;
        int prev=0;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1])num++;
            else{
                prev=num;
                num=1;
            }
            if(num<=prev)ans++;
        }

        return ans;
    }
};
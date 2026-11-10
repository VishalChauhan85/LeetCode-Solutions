class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(52,0);
        for(char ch:s){
            if(ch>='a' && ch<='z')v[ch-'a']++;
            else v[ch-'A'+26]++;
        }

        int ans=0;
        bool ask=false;
        for(int i=0;i<52;i++){
            if(v[i]%2){
                ask=true;
                v[i]--;
            }
            ans+=v[i];
        }

        if(ask)ans++;
        return ans;
    }
};
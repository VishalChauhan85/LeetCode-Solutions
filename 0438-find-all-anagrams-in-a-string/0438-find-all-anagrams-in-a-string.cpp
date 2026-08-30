class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int m=p.size();
        int n=s.size();
        vector<int> ans;
        vector<int> fix(26,0);
        vector<int> ch(26,0);
        if(m>n)return ans;

        for(char ch:p)fix[ch-'a']++;
        for(int i=0;i<m;i++)ch[s[i]-'a']++;
        if(ch==fix)ans.push_back(0);

        for(int i=m;i<n;i++){
            ch[s[i]-'a']++;
            ch[s[i-m]-'a']--;
            if(fix==ch)ans.push_back(i-m+1);
        }

        return ans;
        
    }
};
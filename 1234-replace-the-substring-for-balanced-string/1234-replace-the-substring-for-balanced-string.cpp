class Solution {
public:
    int balancedString(string s) {
        int n=s.size();
        int k=n/4;
        unordered_map<char,int> m;
        for(char ch:s)m[ch]++;

        if(m['Q']==k && m['W']==k && m['E']==k && m['R']==k)return 0;
        int i=0;
        int ans=n;
        for(int j=0;j<n;j++){
            m[s[j]]--;

            while(i<=j && m['Q']<=k && m['W']<=k && m['E']<=k && m['R']<=k){
                ans=min(ans,j-i+1);
                m[s[i]]++;
                i++;
            }
        }

        return ans;

    }
};
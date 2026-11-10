class Solution {
public:
    auto find(string& s,auto p1,auto p2,auto n){
        auto ans=0;
        while(p1>=0 && p2<n && s[p1]==s[p2]){
            p1--;
            p2++;
            ans++;
        }
        return ans;
    }
    int countSubstrings(string s) {
        auto ans=0;
        auto n=s.size();
        for(auto i=0;i<n;i++){
            ans+=find(s,i,i,n);
            ans+=find(s,i,i+1,n);
        }

        return ans;
    }
};
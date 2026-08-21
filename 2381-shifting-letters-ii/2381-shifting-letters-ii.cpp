class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int> v(n+1);

        for(auto a:shifts){
            if(a[2]==1){
                v[a[0]]++;
                v[a[1]+1]--;
            }else{
                v[a[0]]--;
                v[a[1]+1]++;
            }
        }

        for(int i=0;i<n;i++){
            if(i!=0)v[i]+=v[i-1];
            int a=s[i]-'a';
            s[i]='a'+((a+v[i]%26+26)%26);
        }
        return s;
    }
};
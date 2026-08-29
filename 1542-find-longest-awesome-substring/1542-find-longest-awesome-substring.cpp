class Solution {
public:
    int longestAwesome(string s) {
        int l=s.size();
        int num=0;
        int ans=0;
        vector<int> v(1<<10,-1);
        v[0]=0;

        for(int j=0;j<l;j++){
            int n=s[j]-'0';
            num^=(1<<n);
            if(v[num]!=-1)ans=max(ans,j+1-v[num]);
            else v[num]=j+1;
            for(int i=0;i<10;i++){
                int ok=num^(1<<i);
                if(v[ok]!=-1)ans=max(ans,j+1-v[ok]);
            }          
        }

        return ans;
    }
};
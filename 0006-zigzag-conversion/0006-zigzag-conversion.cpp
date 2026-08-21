class Solution {
public:
    string convert(string s, int num) {
        int n=s.size();
        vector<string> v(num,"");
        v[0]=s[0];

        if(n==1 || num==1)return s;
        
        for(int i=1;i<n;i++){
            int a=(i-1)/(num-1);
            int b=(i-1)%(num-1);
            if(!(a%2))v[b+1]+=s[i];
            else v[num-b-2]+=s[i];
        }

        string ans;
        for(auto a:v)ans+=a;
        return ans;
    }
};
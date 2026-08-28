class Solution {
public:
    int findTheLongestSubstring(string s) {
        int n=s.size();
        int num=0;
        vector<int> v(n+2,0);

        for(int i=0;i<n;i++){
            if(s[i]=='a')num^=1;
            else if(s[i]=='e')num^=2;
            else if(s[i]=='i')num^=4;
            else if(s[i]=='o')num^=8;
            else if(s[i]=='u')num^=16;
            v[i+1]=num;
        }

        unordered_map<int,int> m;
        num=0;

        for(int i=0;i<n+1;i++){
            if(m.find(v[i])!=m.end()){
                num=max(num,i-m[v[i]]);
            }else{
                m[v[i]]=i;
            }
        }
        return num;

    }
};
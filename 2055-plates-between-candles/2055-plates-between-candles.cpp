class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n=s.size();

        int num=0;
        for(char ch:s)if(ch=='*')num++;
        vector<int> pre(n,num);
        vector<int> post(n,num);

        int p1=num;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='*'){
                if(i!=n-1)pre[i]=pre[i+1];                
                p1--;
            }else pre[i]=p1;
        }
        
        p1=num;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                if(i!=0)post[i]=post[i-1];
                p1--;
                
            }else post[i]=p1;
        }

        vector<int> ans;
        for(auto p:queries){
            int op=num-pre[p[0]]-post[p[1]];
            if(op>0)ans.push_back(op);
            else ans.push_back(0);
        }
        return ans;
    }
};
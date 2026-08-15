class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n=s.size();

        int num=0;
        for(char ch:s)if(ch=='*')num++;
        vector<int> pre(n,num);
        vector<int> post(n,num);

        int count=0;
        int p1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='|'){
                int j=i;
                while(j>=p1){
                    pre[j]=count;
                    j--;
                }
                p1=i+1;
            }else count++;
        }
        
        p1=n-1;
        count=0;

        for(int i=n-1;i>=0;i--){
            if(s[i]=='|'){
                int j=i;
                while(j<=p1){
                    post[j]=count;
                    j++;
                }
                p1=i-1;
            }else count++;
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
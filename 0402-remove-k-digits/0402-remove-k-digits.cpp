class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(n<=k)return "0";
        if(k==0)return num;

        string res="";
        vector<int> s;

        for(int i=0;i<n;i++){
            while(!s.empty() && num[s[s.size()-1]]>num[i] && k){
                k--;
                s.pop_back();
            }
            s.push_back(i);
        }

        while(k--){
            s.pop_back();
        }

        bool ask=true;
        for(int i=0;i<s.size();i++){
            if(ask && num[s[i]]=='0')continue;
            ask=false;
            res+=num[s[i]];
        }

        if(res=="")return "0";
        else return res;

    }
};
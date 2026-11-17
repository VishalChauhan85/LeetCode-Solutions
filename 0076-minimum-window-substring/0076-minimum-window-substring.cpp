class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int ask=0;
        vector<int> v1(128,0);
        vector<int> v2(128,0);

        for(char ch:t)v1[ch]++;
        for(int i:v1)if(i!=0)ask++;
        
        int count=0;
        int i=0;
        int ans=INT_MAX;
        string ret="";

        int st=-1;
        int end=-1;
        for(int j=0;j<n;j++){
            v2[s[j]]++;
            if(v2[s[j]]==v1[s[j]])count++;

            while(count==ask){
                if(ans>(j-i+1)){
                    ans=j-i+1;
                    st=i;
                    end=j-i+1;
                }
                if(v2[s[i]]==v1[s[i]])count--;
                v2[s[i]]--;
                i++;
            }
        }
        if(st==-1 || end==-1)return "";
        return s.substr(st,end);
    }
};
class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        string v="aeiou";
        int num=0;
        for(int i=0;i<k;i++){
            if(v.find(s[i])!=string::npos)num++;
        }
        int ans=num;

        for(int i=k;i<n;i++){
            if(v.find(s[i])!=string::npos)num++;
            if(v.find(s[i-k])!=string::npos)num--;
            ans=max(ans,num);
        }

        return ans;
    }
};
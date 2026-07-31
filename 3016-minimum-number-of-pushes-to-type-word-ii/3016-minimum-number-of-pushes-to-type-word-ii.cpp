class Solution {
public:
    int minimumPushes(string word) {
        vector<int> v(26,0);
        for(char ch:word)v[ch-'a']++;

        sort(v.rbegin(),v.rend());

        int a=1;
        int ans=0;
        for(int i=0;i<26;i++){
            if(v[i]==0)break;
            if(i==8)a++;
            else if(i==16)a++;
            else if(i==24)a++;

            ans+=a*v[i];
        }
        return ans;
    }
};
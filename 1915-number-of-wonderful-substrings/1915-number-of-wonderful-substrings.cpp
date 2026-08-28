class Solution {
public:
    long long wonderfulSubstrings(string word) {
        long long ans=0;
        int num=0;
        vector<long long> v(1<<10,0);
        v[0]=1;
        for(char ch:word){
            num^=1<<(ch-'a');
            ans+=v[num];
            for(int i=0;i<10;i++){
                ans+=v[num^(1<<i)];
            }
            v[num]++;
        }
        
        return ans;
    }
};
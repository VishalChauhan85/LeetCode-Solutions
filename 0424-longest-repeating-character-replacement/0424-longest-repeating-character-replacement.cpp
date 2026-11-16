class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> freq;
        int ans=0,i=0,maxfreq=0;

        for(int j=0;j<n;j++){
            freq[s[j]]++;
            maxfreq=max(maxfreq,freq[s[j]]);

            while((j-i+1)-maxfreq>k){
                freq[s[i]]--;
                i++;
            }

            ans=max(ans,j-i+1);
        }

        return ans;
    }
};
class Solution {
public:
    long long countValidSubstrings(string s) {
        long long n=s.size();
        long long ans=0;
        long long count=0;
        for(int i=0;i<n;i++){
            count++;
            if(i>=2 && s.substr(i-2,3)=="abc"){
                ans+=count*(count-1)/2-1;
                count=2;
            }
        }

        return ans+count*(count+1)/2;
    }
};
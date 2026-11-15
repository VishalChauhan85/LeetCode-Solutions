class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long ans=0;
        int zero=1;
        int one=0;

        int sum=0;
        for(int i:arr){
            sum+=i;
            if(sum%2){
                ans+=zero;
                one++;
            }else{
                ans+=one;
                zero++;
            }
        }

        return ans%1000000007;
    }
};
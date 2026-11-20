class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int the) {
        int sum=0;
        int n=arr.size();
        int ans=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(i==k-1 && (sum/k)>=the)ans++;
            if(i<k)continue;
            
            sum-=arr[i-k];
            if((sum/k)>=the)ans++;
        }

        return ans;
    }
};
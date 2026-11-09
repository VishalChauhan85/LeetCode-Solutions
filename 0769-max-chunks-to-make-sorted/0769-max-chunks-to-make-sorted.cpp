class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int sum=0;
        int anssum=0;
        for(int i=0;i<n;i++){
            anssum+=arr[i];
            sum+=i;
            if(anssum==sum)ans++;
        }

        return ans;
    }
};
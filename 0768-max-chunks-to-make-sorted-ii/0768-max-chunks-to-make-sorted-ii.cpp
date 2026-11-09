class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int> v=arr;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=0;
        long long sum=0;
        long long anssum=0;

        for(int i=0;i<n;i++){
            sum+=arr[i];
            anssum+=v[i];
            if(sum==anssum)ans++;
        }

        return ans;

    }
};
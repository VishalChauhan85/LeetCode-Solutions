class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        int mod=1000000007;

        vector<int> left(n,-1);
        vector<int> right(n,n);

        stack<int> s;

        for(int i=0;i<n;i++){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(!s.empty())left[i]=s.top();
            s.push(i);
        }

        while(!s.empty())s.pop();

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && arr[s.top()]>arr[i]){
                s.pop();
            }
            if(!s.empty())right[i]=s.top();
            s.push(i);
        }

        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=(1LL*arr[i]*((i-left[i])*(right[i]-i)))%mod;
            ans=ans%mod;
        }

        return ans;

    }
};
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int n=maxHeights.size();
        vector<long long> left(n);
        vector<long long> right(n);
        stack<int> s;

        for(int i=0;i<n;i++){
            while(!s.empty() && maxHeights[i]<maxHeights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                left[i]=left[s.top()]+1LL*maxHeights[i]*(i-s.top());
            }else{
                left[i]=1LL*maxHeights[i]*(i+1);
            }
            
            s.push(i);
        }

        while(!s.empty())s.pop();

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && maxHeights[i]<=maxHeights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                right[i]=right[s.top()]+1LL*maxHeights[i]*(s.top()-i);
            }else{
                right[i]=1LL*maxHeights[i]*(n-i);
            }
            s.push(i);
        }

        long long sum=0;
        for(int i=0;i<n;i++){
            sum=max(sum,1LL*left[i]+right[i]-maxHeights[i]);
        }

        return sum;
    }
};
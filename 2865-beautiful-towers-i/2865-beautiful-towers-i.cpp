class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n=heights.size();
        vector<long long> left(n,-1);
        vector<long long> right(n,n);
        stack<int> s;

        long long sum=0;
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[i]<heights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                left[i]=1LL*left[s.top()]+1LL*heights[i]*(i-s.top());
            }else{
                left[i]=1LL*heights[i]*(i+1);
            }
            
            s.push(i);
        }

        sum=0;
        while(!s.empty())s.pop();

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[i]<=heights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                right[i]=1LL*right[s.top()]+1LL*heights[i]*(s.top()-i);
            }else{
                right[i]=1LL*heights[i]*(n-i);
            }
            s.push(i);
        }

        sum=0;
        for(int i=0;i<n;i++){
            sum=max(sum,1LL*left[i]+right[i]-heights[i]);
        }

        return sum;
    }
};
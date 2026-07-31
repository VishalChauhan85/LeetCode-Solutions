class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n=heights.size();
        vector<long long> left(n);
        vector<long long> right(n);
        stack<int> s;

        for(int i=0;i<n;i++){
            while(!s.empty() && heights[i]<heights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                left[i]=left[s.top()]+1LL*heights[i]*(i-s.top());
            }else{
                left[i]=1LL*heights[i]*(i+1);
            }
            
            s.push(i);
        }

        while(!s.empty())s.pop();

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[i]<=heights[s.top()]){
                s.pop();
            }
            if(!s.empty()){
                right[i]=right[s.top()]+1LL*heights[i]*(s.top()-i);
            }else{
                right[i]=1LL*heights[i]*(n-i);
            }
            s.push(i);
        }

        long long sum=0;
        for(int i=0;i<n;i++){
            sum=max(sum,1LL*left[i]+right[i]-heights[i]);
        }

        return sum;
    }
};
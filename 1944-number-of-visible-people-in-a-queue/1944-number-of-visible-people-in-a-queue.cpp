class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n=heights.size();
        vector<int> v(n,n-1);
        stack<int> s;

        for(int i=n-1;i>=0;i--){
            int count=0;
            while(!s.empty() && heights[i]>heights[s.top()]){
                s.pop();
                count++;
            }
            if(!s.empty())count++;
            v[i]=count;
            s.push(i);
        }
        v[n-1]=0;

        return v;
    }
};
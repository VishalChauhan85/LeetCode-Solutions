class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,-1);
        stack<int> s;

        for(int i=0;i<2*n;i++){
            int a=i%n;
            while(!s.empty() && nums[s.top()]<nums[a]){
                v[s.top()]=nums[a];
                s.pop();
            }
            s.push(a);
        }
        return v;
    }
};
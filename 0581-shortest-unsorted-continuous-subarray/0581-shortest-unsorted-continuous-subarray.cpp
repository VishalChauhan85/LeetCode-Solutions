class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        stack<int> s;

        int left=n;
        for(int i=0;i<n;i++){
            while(!s.empty() && nums[s.top()]>nums[i]){
                left=min(left,s.top());
                s.pop();
            }
            s.push(i);
        }

        while(!s.empty())s.pop();
        int right=0;

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && nums[s.top()]<nums[i]){
                right=max(right,s.top());
                s.pop();
            }
            s.push(i);
        }

        if(right-left>0)return right-left+1;
        return 0;
    }
};
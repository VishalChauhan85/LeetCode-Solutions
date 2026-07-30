class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();

        vector<int> leftmin(n,-1);
        vector<int> leftmax(n,-1);
        stack<int> s1;
        stack<int> s2;

        for(int i=0;i<n;i++){
            while(!s1.empty() && nums[i]<nums[s1.top()]){
                s1.pop();
            }
            if(!s1.empty())leftmin[i]=s1.top();
            s1.push(i);

            while(!s2.empty() && nums[i]>nums[s2.top()]){
                s2.pop();
            }
            if(!s2.empty())leftmax[i]=s2.top();
            s2.push(i);
            
        }

        while(!s1.empty())s1.pop();
        while(!s2.empty())s2.pop();

        vector<int> rightmin(n,n);
        vector<int> rightmax(n,n);

        for(int i=n-1;i>=0;i--){
            while(!s1.empty() && nums[i]<=nums[s1.top()]){
                s1.pop();
            }
            if(!s1.empty())rightmin[i]=s1.top();
            s1.push(i);

            while(!s2.empty() && nums[i]>=nums[s2.top()]){
                s2.pop();
            }
            if(!s2.empty())rightmax[i]=s2.top();
            s2.push(i);
        }

        long long ans=0;

        for(int i=0;i<n;i++){
            long long a=(i-leftmin[i])*(rightmin[i]-i);
            long long b=(i-leftmax[i])*(rightmax[i]-i);

            ans+=nums[i]*(b-a);
        }

        return ans;

    }
};
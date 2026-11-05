class Solution {
public:
    vector<int> merge(vector<int>& nums,int p1,int p2){
        if(p1>p2)return {};
        if(p1==p2)return {nums[p1]};

        int mid=p1+(p2-p1)/2;
        vector<int> left=merge(nums,p1,mid);
        vector<int> right=merge(nums,mid+1,p2);

        int n=left.size();
        int m=right.size();

        vector<int> v;
        int a=0;
        int b=0;

        while(a<n && b<m){
            if(left[a]<right[b])v.push_back(left[a++]);
            else v.push_back(right[b++]);
        }

        while(a<n)v.push_back(left[a++]);
        while(b<m)v.push_back(right[b++]);

        return v;
    }
    vector<int> sortArray(vector<int>& nums) {
        return merge(nums,0,nums.size()-1);
    }
};
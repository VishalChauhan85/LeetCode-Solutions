class Solution {
public:
    void merge(vector<int>& nums,int p1,int p2){
        if(p1>=p2)return;

        int mid=p1+(p2-p1)/2;
        merge(nums,p1,mid);
        merge(nums,mid+1,p2);

        vector<int> v;
        int a=p1;
        int b=mid+1;
        while(a<=mid && b<=p2){
            if(nums[a]<nums[b])v.push_back(nums[a++]);
            else v.push_back(nums[b++]);
        }

        while(a<=mid)v.push_back(nums[a++]);
        while(b<=p2)v.push_back(nums[b++]);

        for(int i=0;i<v.size();i++){
            nums[p1+i]=v[i];
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        merge(nums,0,nums.size()-1);
        return nums;
    }
};
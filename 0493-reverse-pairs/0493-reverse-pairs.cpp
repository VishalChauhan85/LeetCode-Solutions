class Solution {
public:
    int merge(vector<int>& nums,int low,int mid,int high){
        int p1=low;
        int p2=mid+1;

        int ans=0;
        for(p1=low;p1<=mid;p1++){
            while(p2<=high&&(long long)nums[p1]>(long long)nums[p2]*2)p2++;
            ans+=(p2-(mid+1));
        }

        vector<int> v;
        v.reserve(high-low+1);
        p1=low,p2=mid+1;
        while(p1<=mid && p2<=high){
            if(nums[p1]<nums[p2]){
                v.push_back(nums[p1++]);
            }else{
                v.push_back(nums[p2++]);
            }
        }

        while(p2<=high){
            v.push_back(nums[p2]);
            p2++;
        }
        while(p1<=mid){
            v.push_back(nums[p1]);
            p1++;
        }

        for(int i=low;i<=high;i++){
            nums[i]=v[i-low];
        }

        return ans;
    }
    int mergesort(vector<int>& nums,int low,int high){
        if(low<high){
            int mid=low+(high-low)/2;
            int left=mergesort(nums,low,mid);
            int right=mergesort(nums,mid+1,high);

            int fin=merge(nums,low,mid,high);
            return left+right+fin;
        }
        return 0;
    }
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};
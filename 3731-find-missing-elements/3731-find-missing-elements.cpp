class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> v;

        for(int i=1;i<n;i++){
            int p1=nums[i-1]+1;
            while(p1<nums[i]){
                v.push_back(p1);
                p1++;
            }
        }
        return v;
    }
};
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(10001,0);

        for(int i:nums){
            v[i]++;
        }

        int p1=0;
        int p2=0;

        int num=0;
        for(int i=0;i<10001 && num<n;i++){
            num+=v[i];
            int temp=p1;
            p1=max(p1,p2+(i*v[i]));
            p2=temp;
        }

        return max(p1,p2);
    }
};
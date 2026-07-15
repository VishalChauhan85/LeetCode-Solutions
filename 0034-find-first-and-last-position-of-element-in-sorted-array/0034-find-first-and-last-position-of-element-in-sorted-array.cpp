class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans=-1;
        int p1=0;
        int n=nums.size();
        int p2=n-1;

        vector<int> ret;


        while(p1<=p2){
            int mid=p1+(p2-p1)/2;
            if(nums[mid]==target){
                cout<<mid<<endl;
                ans=mid;
                p2=mid-1;
            }else if(nums[mid]<target){
                p1=mid+1;
            }else p2=mid-1;
        }

        int mid=ans;

        ret.push_back(ans);

        for(int i=mid+1;i<n;i++){
            if(nums[i]==target)ans++;
            else break;
        }

        ret.push_back(ans);


        return ret;
    }
};
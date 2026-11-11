class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int p1=0;
        int p2=num.size()-1;

        while(p1<p2){
            int sum=num[p1]+num[p2];
            if(sum==target){
                return {p1+1,p2+1};
            }else if(sum<target)p1++;
            else p2--;
        }
        return {-1,-1};
    }
};
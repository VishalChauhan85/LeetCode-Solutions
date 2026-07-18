class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> v;
        int carry=1;
        for(int i=n-1;i>=0;i--){
            if(carry==1 && digits[i]==9){
                v.push_back(0);
            }
            else if(carry==1){
                v.push_back(digits[i]+1);
                carry=0;
            }else if(carry==0){
                v.push_back(digits[i]);
            }
        }
        if(carry)v.push_back(1);

        reverse(v.begin(),v.end());
        return v;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int i:nums){
            string a=to_string(i);
            v.push_back(a);
        }

        sort(v.begin(),v.end(), [](string a,string b){return a+b>b+a;});
        string ans="";

        if(v[0]=="0")return "0";
        for(auto a:v)ans+=a;
        return ans;

    }
};
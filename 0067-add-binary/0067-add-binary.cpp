class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int carry=0;
        int p1=a.size()-1;
        int p2=b.size()-1;

        while(p1>=0 || p2>=0 ||carry){
            if(p1>=0)carry+=a[p1--]-'0';
            if(p2>=0)carry+=b[p2--]-'0';
            ans+=carry%2+'0';
            carry/=2;
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
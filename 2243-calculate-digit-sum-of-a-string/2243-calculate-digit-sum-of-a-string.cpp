class Solution {
public:
    string digitSum(string s, int k) {
        int b=s.size();
        while(b>k){
            string a;
            for(int i=0;i<b;i+=k){
                int num=0;
                for(int j=i;j<min(i+k,b);j++){
                    num+=(s[j]-'0');
                }
                a+=to_string(num);
            }

            s=a;
            b=s.size();
        }

        return s;
    }
};
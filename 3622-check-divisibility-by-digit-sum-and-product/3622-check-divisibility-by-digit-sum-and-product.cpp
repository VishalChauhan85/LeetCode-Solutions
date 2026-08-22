class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int mul=1;

        int copy=n;
        while(copy){
            int a=copy%10;
            sum+=a;
            mul*=a;
            copy/=10;
        }

        return !(n%(sum+mul));
    }
};
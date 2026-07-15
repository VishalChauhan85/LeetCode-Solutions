class Solution {
public:
    int gcd(int a,int b){
        return b==0?a:gcd(b,a%b);
    }
    int gcdOfOddEvenSums(int n) {
        int a1=(n*(2+(n-1)*2))/2;
        int a2=(n*(4+(n-1)*2))/2;

        return gcd(a1,a2);
    }
};
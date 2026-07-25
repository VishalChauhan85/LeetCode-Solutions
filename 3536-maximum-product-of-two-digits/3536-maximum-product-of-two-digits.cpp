class Solution {
public:
    int maxProduct(int n) {
        if(n<10)return n;

        int n1=n%10;
        n/=10;
        int n2=n%10;
        n/=10;

        while(n){
            if(n1<n2)swap(n1,n2);
            int num=n%10;
            if(num>n2)swap(n2,num);
            n/=10;
        }

        return n1*n2;

    }
};
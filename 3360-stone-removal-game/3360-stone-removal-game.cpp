class Solution {
public:
    bool canAliceWin(int n) {
        int num=10;
        int ans=0;

        while(num<=n){
            n-=num;
            num--;
            ans++;
        }

        if(ans%2)return true;
        else return false;        
    }
};
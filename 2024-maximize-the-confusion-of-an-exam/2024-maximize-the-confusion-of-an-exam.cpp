class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        int n=ans.size();
        int anst=0;
        int ansf=0;
        int tempt=0;
        int tempf=0;

        int ti=0;
        int fi=0;

        for(int j=0;j<n;j++){
            if(ans[j]=='T')tempt++;
            else tempf++;

            while(tempt>k){
                if(ans[ti]=='T')tempt--;
                ti++;
            }
            while(tempf>k){
                if(ans[fi]=='F')tempf--;
                fi++;
            }

            anst=max(anst,j-ti+1);
            ansf=max(ansf,j-fi+1);
        }

        return max(ansf,anst);

    }
};
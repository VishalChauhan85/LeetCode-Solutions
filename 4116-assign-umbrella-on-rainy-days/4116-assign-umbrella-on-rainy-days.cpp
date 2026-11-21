class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int a=0;
        int b=0;

        vector<string> ans;
        int n=rain.size();
        for(int i=0;i<n;i++){
            if(rain[i]==1){
                if(i<n-1 && rain[i+1]==1){
                    if(a<=b){
                        ans.push_back("Alice");
                        a++;
                    }
                    else {
                        ans.push_back("Bob");
                        b++;
                    }
                }else{
                    ans.push_back("Bob");
                    b++;
                }
            }else{
                ans.push_back("None");
            }
        }
        return ans;
    }
};
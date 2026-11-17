class Solution {
public:
    int totalFruit(vector<int>& fr) {
        int n=fr.size();
        int i=0,ans=0;

        unordered_map<int,int> basket;
        for(int j=0;j<n;j++){
            basket[fr[j]]++;
            while(basket.size()>2){
                basket[fr[i]]--;
                if(basket[fr[i]]==0)basket.erase(fr[i]);
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};
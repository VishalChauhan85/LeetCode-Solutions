class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> m(2005,0);
        for(int i:arr)m[i+1000]++;

        vector<bool> v(1001,false);
        for(int i:m){
            if(i!=0){
                if(v[i])return false;
                v[i]=true;
            }
        }

        return true;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int num=0;
        vector<string> arr;
        vector<vector<string>> ans;
        for(string str:strs){
            string s=str;
            sort(s.begin(),s.end());
            bool found=false;
            for(int i=0;i<num;i++){
                if(arr[i]==s){
                    ans[i].push_back(str);
                    found=true;
                    break;
                }
            }
            if(!found){
                vector<string> add={str};
                ans.push_back(add);
                arr.push_back(s);
                num++;
            }
        }
        return ans;
    }
};
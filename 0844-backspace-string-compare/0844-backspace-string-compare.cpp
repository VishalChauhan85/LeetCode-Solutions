class Solution {
public:
    string find(string s){
        string ans;
        for(char ch:s){
            if(ch=='#'){
                if(!ans.empty())ans.pop_back();
            }else ans+=ch;
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        return find(s)==find(t);
    }
};
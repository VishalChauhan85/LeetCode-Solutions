class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        string temp;
        for(char ch:s){
            if(ch=='('){
                st.push('(');
                temp+='(';
            }else{
                st.pop();
                temp+=')';
            }
            if(st.empty()){
                int n=temp.size();
                ans+=temp.substr(1,n-2);
                temp.clear();
            }
        }
        return ans;
    }
};
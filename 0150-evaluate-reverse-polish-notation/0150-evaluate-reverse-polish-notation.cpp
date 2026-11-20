class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string ch:tokens){
            if(ch=="+"){
                int p1=st.top();st.pop();
                int p2=st.top();st.pop();
                st.push(p2+p1);
            }else if(ch=="-"){
                int p1=st.top();st.pop();
                int p2=st.top();st.pop();
                st.push(p2-p1);
            }else if(ch=="*"){
                int p1=st.top();st.pop();
                int p2=st.top();st.pop();
                st.push(p2*p1);
            }else if(ch=="/"){
                int p1=st.top();st.pop();
                int p2=st.top();st.pop();
                st.push(p2/p1);
            }else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
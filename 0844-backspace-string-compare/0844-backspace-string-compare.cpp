class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(char ch:s){
            if(ch!='#')st.push(ch);
            else if(!st.empty())st.pop();
        }
        string s1;
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }

        for(char ch:t){
            if(ch!='#')st.push(ch);
            else if(!st.empty())st.pop();
        }
        string s2;
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }

        return s1==s2;
    }
};
class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        int n=expression.size();
        vector<int> result;
        if(!n)return result;
        if(n==1 || n==2){
            result.push_back(stoi(expression));
            return result;
        }

        for(int i=0;i<n;i++){
            char c=expression[i];
            if(isdigit(c))continue;

            vector<int> left=diffWaysToCompute(expression.substr(0,i));
            vector<int> right=diffWaysToCompute(expression.substr(i+1));

            for(int l:left){
                for(int r:right){
                    int comp=0;

                    if(c=='+')comp=l+r;
                    else if(c=='-')comp=l-r;
                    else comp=l*r;

                    result.push_back(comp);                    
                }
            }
        }
        return result;

    }
};
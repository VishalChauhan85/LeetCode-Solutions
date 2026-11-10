class Solution {
public:
    vector<string> q={"1"};
    Solution(){
        for(int j=1;j<30;j++){
            string a;
            int n=q[j-1].size();
            string v=q[j-1];
            for(int i=0;i<n;i++){
                int count=1;
                while(i!=n-1 && v[i]==v[i+1]){
                    count++;
                    i++;
                }
                a+=to_string(count);
                a+=v[i];
            }
            q.push_back(a);
        }
    }
    string countAndSay(int n) {
        return q[n-1];
    }
};
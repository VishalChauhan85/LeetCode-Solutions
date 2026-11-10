class Solution {
public:
    vector<string> q={"1"};
    string countAndSay(int n) {
        for(int j=1;j<n;j++){
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
        return q[n-1];
    }
};
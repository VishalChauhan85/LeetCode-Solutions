class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> v;
        int n=s.size();
        int p=words.size();
        int w=words[0].size();
        
        unordered_map<string,int> m;
        for(auto a:words)m[a]++;

        for(int i=0;i<w;i++){
            unordered_map<string,int> seen;
            int left=i;
            int count=0;

            for(int j=i;j<=n-w;j+=w){
                string st=s.substr(j,w);

                if(m.count(st)){
                    seen[st]++;
                    count++;

                    while(seen[st]>m[st]){
                        string sub=s.substr(left,w);
                        seen[sub]--;
                        count--;
                        left+=w;
                    }

                    if(count==p)v.push_back(left);
                }else{
                    seen.clear();
                    count=0;
                    left=j+w;;
                }
            }
        }

        return v;        
    }
};
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> table;
        for(int i=1;i<=n;i++)table.push_back(i);

        int start=0;
        while(n>1){
            int end=(start+k-1)%n;
            table.erase(table.begin()+end);
            start=end;
            n--;
        }

        return table[0];
    }
};
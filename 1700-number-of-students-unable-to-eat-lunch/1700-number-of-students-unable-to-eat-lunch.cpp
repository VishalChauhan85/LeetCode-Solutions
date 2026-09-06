class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2,0);
        for(int num:students)count[num]++;

        int ans=students.size();
        for(int num:sandwiches){
            if(count[num]==0)break;
            if(ans==0)break;

            ans--;
            count[num]--;
        }
        return ans;
    }
};
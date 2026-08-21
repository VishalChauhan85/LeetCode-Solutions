class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n,0);
        for(auto a:bookings){
            v[a[0]-1]+=a[2];
            if(a[1]!=n)v[a[1]]-=a[2];
        }

        for(int i=1;i<n;i++)v[i]+=v[i-1];
        return v;
    }
};
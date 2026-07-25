class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> m;
        vector<int> v(n2,-1);
        stack<int> s;

        for(int i=0;i<n2;i++){
            while(!s.empty() && nums2[s.top()]<nums2[i]){
                v[s.top()]=nums2[i];
                m[nums2[s.top()]]=nums2[i];
                s.pop();
            }
            s.push(i);
        }

        vector<int> ans;
        for(int i:nums1){
            if(m[i]==0)ans.push_back(-1);
            else ans.push_back(m[i]);
        }

        return ans;


    }
};
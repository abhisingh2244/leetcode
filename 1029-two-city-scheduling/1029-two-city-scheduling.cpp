class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& s) {
        vector<int>v;
        int res=0;
        for(int i=0;i<s.size();i++)
        {
        res+=s[i][0];
            v.push_back(s[i][1]-s[i][0]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()/2;i++)
        {
        res+=v[i];
        }
        return res;
    }
};
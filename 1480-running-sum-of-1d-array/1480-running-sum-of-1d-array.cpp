class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int res=0;
        for(auto i:nums)
        {
            res+=i;
        ans.push_back(res);
        }
        return ans;
    }
};
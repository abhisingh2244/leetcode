class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
      map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
      for(int j=0;j<nums[i].size();j++)
      {
      mp[nums[i][j]]++;
      }
        }
        vector<int>ans;
       for(auto i:mp)
           {
           if(i.second==nums.size())
               ans.push_back(i.first);
         }
        return ans;
    }
};
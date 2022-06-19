class Solution {
public:
    vector<int> twoSum(vector<int>& s, int target) {
        vector<int>ans;
        for(int i=0;i<s.size();i++)
        {
     for(int j=i+1;j<s.size();j++)
               if(s[i]+s[j]==target)
               {
               ans.push_back(i);
                   ans.push_back(j);
                   break;
                   }
         }
        return ans;
    }
};
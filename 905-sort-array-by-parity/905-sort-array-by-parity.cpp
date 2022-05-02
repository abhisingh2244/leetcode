class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>v1,v2;
        for(auto i:nums)
        {
        if(i%2==0)
            v1.push_back(i);
        else
            v2.push_back(i);
        }
      for(auto k:v2)
          v1.push_back(k);
    return v1;
    }
};
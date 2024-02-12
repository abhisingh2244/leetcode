class Solution {
public:
    int majorityElement(vector<int>& nums) {
      map<int,int>mp;
        int ans;
        for(int i:nums){
        mp[i]++;}
        for(auto i:mp){
          if(i.second>nums.size()/2){ans=i.first;
              break;}
        }
        return ans;
    }
};
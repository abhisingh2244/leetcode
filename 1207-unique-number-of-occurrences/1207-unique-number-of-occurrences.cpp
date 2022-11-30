class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(auto i:arr)
        {
mp[i]++;
        }
        set<int>v;
        for(auto i:mp)
        {
            v.insert(i.second);
         }
      return v.size()==mp.size();  
        
    }
};
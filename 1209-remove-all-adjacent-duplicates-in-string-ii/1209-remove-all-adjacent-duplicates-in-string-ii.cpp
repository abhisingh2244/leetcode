class Solution {
public:
    string removeDuplicates(string s, int k) {
      vector<pair<char,int>>v;
        for(char c:s)
        {
        if(v.empty() || v.back().first !=c)
            
        {
            v.push_back({c,1});
        }
        else
        { v.back().second++;
            if(v.back().second==k)
            {
                v.pop_back();
            }
        }
        }
        string ans="";
        for(auto i:v)
        { 
            ans.append(i.second,i.first);
        }
        return ans;
    }
};
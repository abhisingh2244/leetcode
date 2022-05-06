class Solution {
public:
    string removeDuplicates(string s) {
        vector<pair<char,int>>v;
        for(char c:s)
        {
            if(v.empty() || v.back().first!=c)
                v.push_back({c,1});
            else
                v.back().second++;
                if(v.back().second==2)
                    v.pop_back();
        }
        string ans="";
        for(auto it:v)
            ans.append(it.second,it.first);
        return ans;
    }
};
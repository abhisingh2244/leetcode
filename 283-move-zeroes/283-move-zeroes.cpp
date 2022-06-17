class Solution {
public:
    void moveZeroes(vector<int>& n) {
        vector<int>s;
        vector<int>v;
        for(auto i:n)
        {
        if(i==0)
            v.push_back(i);
        else
            s.push_back(i);
        }
        n.clear();
        for(auto i:s)
            n.push_back(i);
        for(auto i:v)
            n.push_back(i);
        
    }
};
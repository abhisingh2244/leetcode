class Solution {
public:
   int findCenter(vector<vector<int>>& e) {
    // return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];
    int n=e.size();
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
       mp[e[i][0]]++;
       mp[e[i][1]]++;
       }
       for(auto i:mp)
       {
if(i.second==n)
           return i.first;}
       return -1;
       
}
    
};
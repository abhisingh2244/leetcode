class Solution {
public:
    int countLatticePoints(vector<vector<int>>& s) {
        int ans=0;
      for(int i=0;i<=200;i++)
      {
      for(int j=0;j<=200;j++)
      {
          bool f=0;
          
      for(int k=0;k<s.size();k++)
      {
          int l=pow((s[k][0]-i),2)+pow((s[k][1]-j),2);
          if(l<=s[k][2]*s[k][2])
          {  
              f=1;
              break;
          }
      }
          if(f)
              ans++;
      }
      }
        return ans;
    }
};
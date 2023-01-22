class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int n=v.size(),col=0;
        int m=v[0].size();
        for(int i=0;i<n;i++)
        {
            if(v[i][0]==0)col=1;
        for(int j=1;j<m;j++)
        {
        if(v[i][j]==0)
        {
      v[i][0]=0;
        v[0][j]=0;}}}
       for(int i=n-1;i>=0;i--)
       {
           for(int j=m-1;j>=1;j--)
           {
           if(v[i][0]==0 or v[0][j]==0)v[i][j]=0;}
           if(col==1)v[i][0]=0;
       }
        
    }
};
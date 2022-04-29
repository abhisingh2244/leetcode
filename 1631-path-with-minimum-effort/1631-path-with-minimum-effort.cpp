class Solution {
public:
   int minimumEffortPath(vector<vector<int>>& height) 
{   
    int m=height.size();
    int n=height[0].size();
    
    priority_queue<pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>> pq;
    
    pq.push({0,{0,0}});
    
        
   vector<vector<bool>> visited(m,vector<bool>(n));     
        
    while(!pq.empty())
    {
        int res=pq.top().first;
        int i=pq.top().second.first;
        int j=pq.top().second.second;
        
        pq.pop();
        

        
        if(i==m-1&&j==n-1)
            return res;
        
        if(visited[i][j])
            continue;
        
        visited[i][j]=true;
        
        if(i+1<m)
        {
            int dist=abs(height[i+1][j]-height[i][j]);
            
            pq.push({max(dist,res),{i+1,j}});
        }
        
        if(j+1<n)
        {
            int dist=abs(height[i][j+1]-height[i][j]);
            
            pq.push({max(dist,res),{i,j+1}});
        } 
        
        
        
        if(i-1>=0)
        {
            int dist=abs(height[i-1][j]-height[i][j]);
            
            pq.push({max(dist,res),{i-1,j}});
        }
         
       if(j-1>=0)
        {
            int dist=abs(height[i][j-1]-height[i][j]);
            
            pq.push({max(dist,res),{i,j-1}});
        }
        

        
    }
    
    return 0;
    
}
};
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) 
    {
        vector<int> adj[n+1];
        for(int i=0;i<dislikes.size();i++)
        {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);   
            adj[dislikes[i][1]].push_back(dislikes[i][0]);   
        }
        
        vector<int> color(n+1,-1);                 // checking for colors
        
        // for every component
        for(int i=1;i<=n;i++)
        {
            // not colored
            if(color[i]==-1)
            {
                queue<int> q;
                q.push(i);
                color[i] = 0;

                while(!q.empty())
                {
                    int node = q.front();
                    q.pop();

                    // checking for all adjacency nodes
                    for(auto it : adj[node])
                    {
                        // if not colored then color it with oppodite color and push it into the queue
                        if(color[it]==-1)
                        {
                            color[it] = 1-color[node];
                            q.push(it);
                        }
                        // already colored and having same color then return false
                        else if(color[it]==color[node])
                        {
                            return false;
                        }
                    }
                }
            }
        }
        
        return true;
    }
};
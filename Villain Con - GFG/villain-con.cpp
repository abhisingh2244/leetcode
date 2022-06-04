// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
        vector<int> indegree(N+1);
        for(int i=0;i<M;i++){
            indegree[mat[i][1]]++;
        }
        vector<int> adj[N+1];
        for(int i=0;i<M;i++){
            adj[mat[i][0]].push_back(mat[i][1]);
        }
        queue<int> q;
        for(int i=1;i<=N;i++){
            if(indegree[i] == 0) q.push(i);
        }
        int ans = 0;
        while(q.size()){
            int sz = q.size();
            ans++;
            while(sz--){
                int tp = q.front(); q.pop();
                for(auto &it : adj[tp]){
                    indegree[it]--;
                    if(!indegree[it]) q.push(it);
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
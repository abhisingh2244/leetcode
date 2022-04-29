class Solution {
public:
    vector<bool> visited;
    vector<bool> color;
    bool dfs(const vector<vector<int>> &graph, int node, bool parentColor){
        if(visited[node]) return !color[node] == parentColor;
        
        visited[node] = true;
        color[node] = !parentColor;
        for(const auto& adj: graph[node]){
            if(!dfs(graph, adj, !parentColor)) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        visited.resize(n);
        color.resize(n);
        for(int i =0;i<n;i++)
            if(!visited[i] && !dfs(graph, i, false))
                return false;
            
        return true;
    }
};
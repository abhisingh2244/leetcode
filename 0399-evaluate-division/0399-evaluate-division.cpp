class Solution {
public:
void dfs(string node, string& dest, unordered_map<string, unordered_map<string, double>>& adj, unordered_set<string>& vis, double& ans, double temp) {
        if(vis.find(node) != vis.end()) return;

        vis.insert(node);
        if(node == dest){
            ans = temp;
            return;
        }

        for(auto ne : adj[node]){
            dfs(ne.first, dest, adj, vis, ans, temp * ne.second);
        }
    }
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
       unordered_map<string,unordered_map<string,double>>adj;
       for(int i=0;i<equations.size();i++) 
       {
        string u=equations[i][0];
        string v=equations[i][1];
        double value=values[i];

       adj[u][v]=value;
       adj[v][u]=1.0/value;

       }
        vector<double> finalAns;

        for (auto query : queries) {
            string dividend = query[0];
            string divisor = query[1];

            if (adj.find(dividend) == adj.end() || adj.find(divisor) == adj.end()) {
                finalAns.push_back(-1.0);
            } else {
                unordered_set<string> vis;
                double ans = -1, temp=1.0;
                dfs(dividend, divisor, adj, vis, ans, temp);
                finalAns.push_back(ans);
            }
        }

        return finalAns;
    }
};
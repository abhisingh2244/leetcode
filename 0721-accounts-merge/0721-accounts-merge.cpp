class Solution {
public:
    void dfs(vector<string>& curr, string firstEmail,
             unordered_map<string, int>& vis,
             unordered_map<string, vector<string>>& mp) {
        vis[firstEmail] = 1;
        curr.push_back(firstEmail);

        for (auto it : mp[firstEmail]) {
            if (!vis[it]) {
                dfs(curr, it, vis, mp);
            }
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        unordered_map<string, int> vis;
        unordered_map<string, vector<string>> mp;
        int n = accounts.size();

        // Step 1: Build the Graph
        for (auto &account : accounts) {
            string firstEmail = account[1];
            for (int j = 2; j < account.size(); j++) {
                mp[firstEmail].push_back(account[j]);
                mp[account[j]].push_back(firstEmail);
            }
        }

        vector<vector<string>> ans;

        // Step 2: Perform DFS to collect connected components
        for (auto &account : accounts) {
            string name = account[0];
            string firstEmail = account[1];

            if (!vis[firstEmail]) { 
                vector<string> curr;
                curr.push_back(name);
                dfs(curr, firstEmail, vis, mp);

                sort(curr.begin() + 1, curr.end());  // Sort collected emails
                ans.push_back(curr);
            }
        }
        return ans;
    }
};
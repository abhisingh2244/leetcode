//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        // write your code here
        int n = costs.size(), k = costs[0].size();

        if(k==1 and n!= 1)

        {

            return -1;

        }

        vector<vector<int>> dp(n, vector<int>(k, 0));

        set<pair<int,int>> st;

        for (int i = 0; i < k; i++)

        {

            dp[0][i] = costs[0][i];

            st.insert({dp[0][i],i});

        }

        for (int i = 1; i < n; i++)

        {

            for (int j = 0; j < k; j++)

            {

                dp[i][j] = costs[i][j];

                auto it = st.begin();

                auto p = *it;

                if(p.second != j)

                {

                    dp[i][j]+=p.first;

                }

                else if(st.size()>1)

                {

                    

                    it++;

                    auto yp = *it;

                    dp[i][j]+=yp.first;

                    

                }

                

            }

            st.clear();

            for(int j = 0;j<k;j++)

            {

                st.insert({dp[i][j],j});

            }

        }

      int a = 1e9;

      for(int i = 0;i<k;i++)

      {

          a = min(a,dp[n-1][i]);

      }

      if(a==1e9)

      {

          return -1;

      }

      return a;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends
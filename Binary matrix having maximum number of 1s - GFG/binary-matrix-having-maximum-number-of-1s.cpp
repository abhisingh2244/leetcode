//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {

public:

    vector<int> findMaxRow(vector<vector<int>> mat, int N) {

        

        int i = 0, j = N, row = 0;

        

        while(i < N){

            if(j > 0 && mat[i][j - 1] == 1){

                j--;

                row = i;

            }else i++;

        }

        return {row, N - j};

    }

 

};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<vector<int>> arr(n, vector<int> (n));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> arr[i][j];
        Solution obj;
        vector<int> ans = obj.findMaxRow(arr, n);
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends
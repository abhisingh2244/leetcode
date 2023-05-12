//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
     int arrayOperations(int n, vector<int> &arr) {
        int i = 0, part = 0, ok = 0;
        while(i < n) {
            while(i < n && arr[i] == 0) i++, ok = 1;
            if(i == n) break;
            while(i < n && arr[i] != 0) i++;
            part++;
        }
        if(ok) return part;
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
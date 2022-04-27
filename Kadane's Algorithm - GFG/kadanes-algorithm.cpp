// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int a[], int n){
        long long max=a[0],max1=0;
        int i;
        for(i=1;i<n;i++)
          if(max<a[i])
             max=a[i];
        if(max<0)
          return max;
        else
        {
            max=0;
            for(i=0;i<n;i++)
            {
                max1+=a[i];
                if(max<max1)
                  max=max1;
                if(max1<0)
                   max1=0;
            }
            return max;
        }

        // Your code here
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
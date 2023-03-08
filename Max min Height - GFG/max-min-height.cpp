//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution

 

{

 

    public:

 

        bool check(long long val,int n,int k, int w,vector<int> &a){

 

            long long i,prev=0;

 

            vector<int> pre(a.size()+w,0);

 

            long long curr=0;

 

            

 

            for (i=0; i<a.size(); i++){

 

                if (a[i]+prev<val){

 

                    long long diff=max(0LL,val-(a[i]+prev));

 

                    prev+=diff;

 

                    pre[i+w-1]-=diff;

 

                    curr+=diff;

 

                }

 

                prev+=pre[i];

 

            }

 

            

 

         return curr<=k;

 

        }

 

        

 

        long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)

 

        {

 

            // code here

 

            long long l=1,r=1e9+5;

 

            

 

            while (r-l>1){

 

                long long mid=l+(r-l)/2;

 

                if (check(mid,n,k,w,a)){

 

                    l=mid;

 

                }

 

                else{

 

                    r=mid-1;

 

                }

 

                

 

               // cout<<mid<<" ";

 

            }

 

            

 

            if (check(r,n,k,w,a)){

 

                return r;

 

            }

 

            else{

 

                return l;

 

            }

 

        }

 

};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends
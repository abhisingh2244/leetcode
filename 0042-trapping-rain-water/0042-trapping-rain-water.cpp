class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        vector<int>pre(n);
        vector<int>suffix(n);
        pre[0]=h[0];
         suffix[n-1]=h[n-1];
        for(int i=1;i<n;i++)
        {
        pre[i]=max(pre[i-1],h[i]);}
    
   
    for(int i=n-2;i>=0;i--)
    {
suffix[i]=max(suffix[i+1],h[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
     ans+=min(pre[i],suffix[i])-h[i];
    }
         return ans;
    }
   
};
class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
      if(arr.size()==0)
          return 0;
      sort(arr.begin(),arr.end());
        long md=1000000007,ans=0;
        map<int,long>mp;
        for(int i=0;i<arr.size();i++)
        {
            long count=1;
        for(int j=0;j<i;j++)
        {
        if(arr[i]%arr[j]==0 && mp[arr[i]/arr[j]]>=1)
            count=count%md+(mp[arr[j]]*mp[arr[i]/arr[j]])%md;
        }
              mp[arr[i]]=count;
        }
      
        for(auto i:mp)
        {
        ans=ans%md+(i.second)%md;}
        return (int)ans%md;
    }
};
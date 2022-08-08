class Solution {
public:
    int lengthOfLIS(vector<int>& arr) {
        int n=arr.size();
        vector<int> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]>v.back()) v.push_back(arr[i]);
            else{
                int ind=lower_bound(v.begin(),v.end(),arr[i])-v.begin();
                v[ind]=arr[i];
            }
        }
        return v.size();
    }
};
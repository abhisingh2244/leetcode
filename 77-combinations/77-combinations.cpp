class Solution {

public:
void solve(vector<vector<int>> &ans,vector<int> &v,vector<int> temp,int ind,int k){
    
    if(v.size()==k){
        ans.push_back(v);
        return;
    }
    
    for(int i=ind;i<temp.size();i++){
        v.push_back(temp[i]);
        solve(ans,v,temp,i+1,k);
        v.pop_back();
    }
    
}
vector<vector<int>> combine(int n, int k) {
    
    vector<int> temp(n);
    for(int i=0;i<n;i++)
        temp[i]=i+1;
    vector<vector<int>> ans;
    vector<int> v;
    int ind=0;
    
    solve(ans,v,temp,ind,k);
    return ans;
}
};
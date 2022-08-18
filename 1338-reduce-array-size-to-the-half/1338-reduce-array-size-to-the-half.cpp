class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int,int> m;
        
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        
        vector<int> count;
        
        for(auto &a:m){
            count.push_back(a.second);
        }
        
        sort(count.begin(),count.end());
        
        int tot_ele=0,ans=0;
        
        for(int i=count.size()-1;i>=0;i--){
            if(2*tot_ele>=arr.size()){break;}
            else{
                ans++;
                tot_ele+=count[i];
            }
        }
        return ans;
    }
};
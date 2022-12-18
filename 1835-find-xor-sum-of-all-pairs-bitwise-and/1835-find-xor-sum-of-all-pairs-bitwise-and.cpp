class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
        
        int ele=0;
        for(auto a:arr2)ele^=a;
        
        for(auto a:arr1){
            int t=a&ele;
            ans^=t;
        }
        
        return ans;
    }
};
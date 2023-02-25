class Solution {
public:
    int maxProfit(vector<int>& p) {
       int sum=INT_MAX,maxi=INT_MIN;
        for(auto i:p)
        {
        sum=min(sum,i);
            maxi=max(maxi,i-sum);
        }
        return maxi;
    }
};
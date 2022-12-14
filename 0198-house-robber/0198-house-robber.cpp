class Solution {
    int dp[100] = {0};
public:
    Solution(){
        for (int i=0 ; i < 100; i++) dp[i] = -1;
    }
    int rob(vector<int>& nums, int i=0) {
        if ( i >= nums.size()) return 0;

        if (dp[i] != -1) return dp[i];

        return dp[i] = max(nums[i] + rob(nums,i+2), rob(nums,i+1));
    }
};
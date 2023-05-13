class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
         vector<int>dp(high+1);
        dp[0] = 1;
        int MOD = 1000000007;
        for (int i = 1; i <= high; i++) {
            if (i - zero >= 0) {
                dp[i] = (dp[i] + dp[i - zero]) % MOD;
            }
            if (i - one >= 0) {
                dp[i] = (dp[i] + dp[i - one]) % MOD;
            }
        }
       int sum = 0;
      
        for (int i = low; i <= high; i++) {
            sum = (sum + dp[i]) % MOD;
        }
    
        return sum;
    }
};
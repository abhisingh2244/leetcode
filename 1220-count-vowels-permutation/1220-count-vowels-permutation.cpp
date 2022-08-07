class Solution {
public:
    int countVowelPermutation(int n) {
        if(n == 1)
            return 5;
        
        vector<uint64_t> count(5,1), nextCount(5);
        uint64_t res, mod = 1e9+7;
        
        for(int i = 2; i <= n; i++){
            nextCount[0] = (count[1] + count[2] + count[4]) % mod;
            nextCount[1] = (count[0] + count[2]) % mod;
            nextCount[2] = (count[1] + count[3]) % mod;
            nextCount[3] = count[2];
            nextCount[4] = (count[2] + count[3]) % mod;
            count = nextCount;
        }
        
        res = (nextCount[0] + nextCount[1] + nextCount[2] + nextCount[3] + nextCount[4]) % mod;
        return (int)res;
    }
};
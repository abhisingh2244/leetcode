class Solution {
public:
    int minimumAverageDifference(vector<int> &vec) {
        long long n = vec.size();
        vector<long long> pref(n, 0);
        pref[0] = vec[0];
        for(long long i=1; i<n; i++) {
            pref[i] = pref[i-1] + vec[i];
        }
        
        int ans = -1;
        long long minDiff = INT_MAX;
        for(int i=0; i<n; i++) {
            long long left = pref[i]/(i+1);
            long long right = 0;
            if(n-i-1 != 0) right = (pref[n-1] - pref[i])/(n-i-1);
            long long diff = abs(left-right);
            if(diff < minDiff) {
                minDiff = diff;
                ans = i;
            }
        }
        return ans;
    }
};
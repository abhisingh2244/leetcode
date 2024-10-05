#define ll long long
class Solution {
public:
    long long dividePlayers(vector<int>& s) {
     sort(begin(s), end(s));
        long long ans = 0;
        long long set = s[0] + s[(int)s.size() - 1];
        int l = 0,  r = s.size() - 1;
        while(l<r){
            ll diff = s[l] + s[r];
            ans += s[l] * s[r];
            l++, r--;
            if(set != diff)     return -1;
        }
        return ans;   
    }
};
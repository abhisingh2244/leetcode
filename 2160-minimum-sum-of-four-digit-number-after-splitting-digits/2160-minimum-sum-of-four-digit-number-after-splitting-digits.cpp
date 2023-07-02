class Solution {
public:
    int minimumSum(int n) {
        vector<int>v;
        while(n)
        {
            v.push_back(n%10);
            n=n/10;
        }
        sort(v.begin(),v.end());
        return 10*(v[0]+v[1])+v[2]+v[3];
    }
};
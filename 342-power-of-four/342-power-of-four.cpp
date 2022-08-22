class Solution {
public:
    
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        float res=log(n)/log(4);
        if(floor(res)==res)
            return true;
        else
            return false;
    }
};
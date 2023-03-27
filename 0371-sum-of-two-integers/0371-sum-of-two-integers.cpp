class Solution {
public:
    int getSum(int a, int b) {
        int trigger = a & b;
        int ret = a ^ b;
        while(trigger)
        {
            int temp = (trigger & 0xffffffff)<<1; //not a problem anymore!
            trigger = temp & ret;
            ret ^= temp;
        }
        return ret;
    }
};
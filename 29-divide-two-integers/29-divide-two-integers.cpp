class Solution {
public:
    int divide(int dividend, int divisor) {
       
         if( dividend == 0 )
            return 0;
        
        if( divisor == 1 )
            return dividend;
        
        if( divisor == -1 && dividend == INT_MIN )
            return INT_MAX;
        
        if( divisor == -1 )
            return -dividend;

        if( divisor == INT_MIN && dividend == INT_MIN )
            return 1;

        if( divisor == INT_MIN )
            return 0;
         else
             return dividend/divisor;
        
    }
};
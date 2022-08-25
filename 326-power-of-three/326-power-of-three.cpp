class Solution {
public:
    bool isPowerOfThree(int n) {
         double val = (log10(n)/log10(3));
      
        if(val == floor(val) && val != -1.0 / 0.0){
            return true;
        }
        return false;
        
    }
};
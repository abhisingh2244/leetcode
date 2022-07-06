class Solution {
public:
    int fib(int n) {
        double sqrt5 = sqrt(5);
        return (pow(1 + sqrt5, n) - pow(1 - sqrt5, n)) / pow(2, n) / sqrt5;
    
    }
};
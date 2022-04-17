class Solution {
public:
    int numberOfSteps(int n) {
        int count=0;
        while(n)
        {
            if(n%2==0)
            {
            n/=2;
           
            }
            else{
    n-=1;}
             count++;
                
        }
        return count;
    }
};
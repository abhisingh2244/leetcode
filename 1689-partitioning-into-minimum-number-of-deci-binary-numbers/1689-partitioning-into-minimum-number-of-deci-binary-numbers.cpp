class Solution {
public:
    int minPartitions(string n) {
       int len=n.length();
      char max='0';
      for(int i=0;i<len;i++){
        if(n[i]>max)
          max=n[i];
      }
      max=max-48; //to change ascii value to original character
      return max;
    }
};
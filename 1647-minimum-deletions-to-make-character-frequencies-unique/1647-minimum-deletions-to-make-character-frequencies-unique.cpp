class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        vector<int>cnt(26,0);        //Storing the frequecy of the characters in the string. 
        for(auto p:s)cnt[p-'a']++;  // Frequecy of each chars is stored in the vector.
        vector<int>v; 
        for(int i=0;i<26;i++){
            if(cnt[i])v.push_back(cnt[i]);  // all frequencies are stored in an array and sorted in reverse order.
        }
        sort(v.rbegin(),v.rend());
        int c=0;        // count variable set to 0 initially
      
        for(int i=1;i<v.size();i++){
            if(v[i]>=v[i-1]){
                if(v[i-1]==0){       // A case when the prev value becomes 0, then we have to delete all the furthur elements afterwards.
				  c+=v[i];
                  v[i]=0;
                  continue;
                }
                c+=(v[i]-v[i-1]+1);    // storing the number of chars removed
                v[i]=v[i-1]-1;             // changing the current value to prev-1
            }
        }
        return c;
    }
};
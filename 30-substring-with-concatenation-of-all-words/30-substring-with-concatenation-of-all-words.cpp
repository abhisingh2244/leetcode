class Solution {
public:
   vector<int> findSubstring(string s, vector<string>& words) {
    int l = words[0].length();
    if(l*words.size()>s.length())return {};     
    unordered_map<string,int> m,n;
    for(auto x:words)m[x]+=1;
    n = m;
    vector<int>ans;
    int i=0, x=-1,k=0;
    while(i<s.length()){
        string t = s.substr(i,l);      // check every subString of length 'l'
        if(m[t]){                         // if it is there 
            m[t]-=1;                   // decrease from map in 'm'
            if(x==-1){                // if it is first string 
                x=i;                        // then 'x' will be 'i' the starting index
            }
            k+=1;                        // count the strings
            i+=l;                       // increment 'i'  with 'l'
        }
        else{                            // if it is not there in 'm'
            if(x!=-1){                      //  if we already find atleast 1 substring in 's'
                if(k==words.size()){    // means words array completed find in 's'
                    ans.push_back(x);       // push starting index
                }
                 i = x;               // intialize i with starting index of prev,,  because there can be more substring after that
                k=0;   
                x=-1;
                m = n;
            }
            i += 1;          // if string is not there in map then i will increment only 1 time
        }
    }
    if(k==words.size()){
        ans.push_back(x);
    }
    return ans;
}
};
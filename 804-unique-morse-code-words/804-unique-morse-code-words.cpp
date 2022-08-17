class Solution {
public:
    vector<string>mp={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
       unordered_set<string> st;
        for(auto word : words) {
            string s = "";
            for(auto c : word) {
                s += mp[c-'a'];
            }
            st.insert(s);
        }
        return st.size();  
    }
};
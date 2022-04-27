

class Solution {
public:
    class ds{
       public:
        vector<int>par;
        int sz;
        ds(int n){
            this->sz=n;
            par.resize(n,0);
            for(int i=0;i<n;i++)par[i]=i;
        }
        void merge(int u , int v){
            int g1=find(u);
            int g2=find(v);
            par[g2]=g1;
        }
        int find(int u){
            if(u==par[u])return u;
            return par[u]=find(par[u]);
        }
        
    };
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        ds uf(n);
        for(int i=0;i<pairs.size();i++){
            uf.merge(pairs[i][0],pairs[i][1]);
        }
        unordered_map<int,vector<int>>m;
        for(int i=0;i<uf.par.size();i++){
             //To Find the parent of each idx paired together
            m[uf.find( uf.par[i] )].push_back(i);
        }
        for(auto v:m){
            string t;
            for(int i=0;i<v.second.size();i++)t+=s[v.second[i]];
            sort(t.begin(),t.end());
            for(int i=0;i<v.second.size();i++)s[v.second[i]]=t[i];
        }
        return s;
    }
};
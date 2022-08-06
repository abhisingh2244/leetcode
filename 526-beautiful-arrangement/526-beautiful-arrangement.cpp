class Solution {
public:
    bool visited[17];
    int cnt;
    void func(int n,int pos){
        if(pos>n) cnt++;
        for(int i=1;i<=n;i++){
            if(!visited[i]&&(pos%i==0||i%pos==0)){
                visited[i]=true;
                func(n,pos+1);
                visited[i]=false;
            }
        }
    }
    int countArrangement(int n) {
        func(n,1);
        return cnt;
    }
};

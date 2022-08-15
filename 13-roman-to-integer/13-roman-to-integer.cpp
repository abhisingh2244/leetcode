class Solution {
public:
    int romanToInt(string str) {
        unordered_map<char,int> mp;
mp['I']=1;
mp['V']=5;
mp['X']=10;
mp['L']=50;
mp['C']=100;
mp['D']=500;
mp['M']=1000;
int num=0;int ans=0;
int pre=0;int n=str.size();
for(int i=n-1;i>=0;i--){
char s=str[i];
num=(mp[s]);
if(num>=pre)
ans+=num;
else
ans-=num;
pre=num; }
return ans;
        
    }
};
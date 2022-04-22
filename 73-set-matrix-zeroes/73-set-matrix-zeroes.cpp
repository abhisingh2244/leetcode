#include<bits/stdc++.h>
class Solution {
public:
  
void setZeroes(vector<vector<int>> &v)
{
	// Write your code here.
	unordered_set<int>s1;
	unordered_set<int>s2;
	for(int i=0;i<v.size();i++)
	{
    for(int j=0;j<v[i].size();j++)
		if(v[i][j]==0)
		{s1.insert(i);
			s2.insert(j);
		}
	}

	for(int i=0;i<v.size();i++)
	{
    for(int j=0;j<v[i].size();j++)
	{if(s1.count(i)!=0 or s2.count(j)!=0)
			v[i][j]=0;
	}
	}
}
};
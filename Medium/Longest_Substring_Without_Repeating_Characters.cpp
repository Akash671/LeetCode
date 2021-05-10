/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

bool solve1(string str,int i,int j)
{
	vector<bool>visit(26);
	for(int k=i;k<=j;++k)
	{
		if(visit[str[k]-'a']==true)
		{
			return false;
		}
		visit[str[k]-'a']=true;
	}
	return true;
}


int solve(string s)
{
	int n=s.size();
	int ans=0;
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;++j)
		{
		    if(solve1(s,i,j))
		    {
		    	ans=max(ans,j-i+1);
		    }
		}
	}
	return ans;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<solve(s)<<"\n";
	}
	return 0;
}

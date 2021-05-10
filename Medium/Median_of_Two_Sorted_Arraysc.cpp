/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>a,vector<int>b)
{
	vector<int>v;
	for(int i=0;i<a.size();++i)
	{
		v.push_back(a[i]);
	}
	for(int i=0;i<b.size();++i)
	{
		v.push_back(b[i]);
	}
	sort(v.begin(),v.end());
	int n=v.size();
	if(n%2==0)
	{
		return (v[n/2]+v[n/2-1])/2;
	}
	else
	{
	   return v[n/2];
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
		vector<int>a(n);
		vector<int>b(m);
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;++i)
		{
			cin>>b[i];
		}
		cout<<solve(a,b)<<"\n";
	}
	return 0;
}

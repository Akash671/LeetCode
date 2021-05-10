/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;


vector<int> solve(vector<int>a,int n,int k)
{
	for(int ii=0;ii<k;++ii)
	{
		int last=a[n-1];
		for(int i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=last;
	}
	return a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		vector<int>ans;
		ans=solve(a,n,k);
		for(auto i:ans)
		{
			cout<<i<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

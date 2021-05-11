/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll int solve(ll int n)
{
	ll int rev=0;
	//ll int N=n,r;
	while(n)
	{
	   r=n%10;
	   rev=rev*10+r;
	   n=n/10;
	}
	return rev;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}

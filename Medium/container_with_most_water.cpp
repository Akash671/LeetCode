/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

int solve(int n,int a[])
{
	if(n==0 || n<2)
	{
		return 0;
	}
	else
	{
		int m=0;
		int left=0;
		int right=n-1;
		while(left<right)
		{
			m=max(m,(right-left)*min(a[left],a[right]));
			if(a[left]<a[right])
			{
				left++;
			}
			else
			{
				right--;
			}
		}
		return m;
	}
	//return max;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;++i)
    	{
    		cin>>a[i];
    	}
    	cout<<solve(n,a)<<"\n";
    }
	return 0;
}

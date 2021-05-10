/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<long int>v;
        for(long int i=0;i<nums1.size();++i)
        {
            v.push_back(nums1[i]);
        }
        for(long int i=0;i<nums2.size();++i)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(),v.end());
        long int n=v.size();
        double ans;
        if(n%2!=0)
        {
            ans=v[n/2];
            return ans;
        }
        else
        {
            ans=float(v[n/2]+v[n/2-1])/2;
            return ans;
        }
    }

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		int m;
		cin>>m;
		vector<int>b(m);
		for(int i=0;i<m;++i)
		{
			cin>>b[i];
		}
		//cout<<double(solve(n,a,m,b))<<"\n";
		printf("%.6f",findMedianSortedArrays(a,b));
		cout<<"\n";
	}
	return 0;
}

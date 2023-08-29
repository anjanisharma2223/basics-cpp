#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter size of array ";cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxi=0,sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum>maxi)
		{
			maxi=sum;
		}
		if(sum<0)
		{
			sum=0;
		}
	}
	cout<<maxi<<endl;
}

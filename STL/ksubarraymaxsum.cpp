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
	int k;cout<<"Enter k ";cin>>k;
	int maxi=0,sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=a[i];
	}
	if(sum>maxi)
	{
		maxi=sum;
	}
	int i=0,j=k-1;
	while(j<n)
	{
		sum-=a[i];
		i++;
		j++;
		if(j==n) break;
		sum+=a[j];
		if(sum>maxi)
		{
			maxi=sum;
		}
	}
	cout<<maxi<<endl;
}

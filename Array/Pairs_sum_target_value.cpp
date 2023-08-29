#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	int sum,count=0;
	cout<<"Enter target sum ";
	cin>>sum;
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]+a[j]==sum)
		{
			count++;
		}
	}
	cout<<count;
	return 0;
}

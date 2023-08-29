#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	int count=0,sum;
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
		{
			for(k=j+1;k<n;k++)
			{
				if(a[i]+a[j]+a[k]==sum)
				{
					count++;
				}
			}
		}
	}
	cout<<count;
	return 0;
}

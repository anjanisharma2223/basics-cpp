#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j;
	for(i=0;i<n;i++)
	{
		int min_index=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[min_index])
			{
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

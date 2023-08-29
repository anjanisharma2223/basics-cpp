#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int minIndex;
	for(i=0;i<n-1;i++)
	{
		minIndex=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[minIndex])
			{
				minIndex=j;
			}
		}
		swap(a[i],a[minIndex]);
		
	}
	cout<<"Sorted array ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

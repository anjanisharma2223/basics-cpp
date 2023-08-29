#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n],maxi=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		maxi=max(maxi,a[i]);
	}
	int count[maxi+1]={0};
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	int sum=0;
	for(i=0;i<maxi+1;i++)
	{
//		cout<<count[i];
		sum+=count[i];
		count[i]=sum;
	}
	int sort[n];
	for(i=0;i<n;i++)
	{
		count[a[i]]--;
		sort[count[a[i]]]=a[i];
	}
	cout<<"Sorted array ";
	for(i=0;i<n;i++)
	{
		cout<<sort[i]<<" ";
	}
	
	
}

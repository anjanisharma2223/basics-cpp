#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int start=0,end=n-1,mid;
	mid=start+(end-start)/2;
	while(start<end)
	{
		if(a[mid]>=a[0])
		{
			start=mid+1;
		}
		else
		{
			end=mid;
		}
		mid=start+(end-start)/2;
	}
	cout<<start;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter values of mountain array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int first=0,last=n-1,mid;
	mid=first+(last-first)/2;
	while(first<last)
	{
		if(a[mid]<a[mid+1])
		{
			first=mid+1;
		}
		else last=mid;
		mid=first+(last-first)/2;
	}
	cout<<"Peak value is "<<first;
}

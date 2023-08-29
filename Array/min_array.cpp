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
	cout<<"Array is ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	int min=INT_MAX;
	cout<<"Minimum element is ";
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	cout<<min;
	
}

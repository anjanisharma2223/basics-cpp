#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>> n;
	int a[n];
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

	int start = 0,end=n-1;
	for(i=0;i<n;i++)
	{
		while(start<end)
		{
			swap(a[start],a[end]);
			start++;end--;
		}		
	}
	
	cout<<"Reverse array is ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
	
}

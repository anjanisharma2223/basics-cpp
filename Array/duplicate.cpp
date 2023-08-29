#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	int ans=0;
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i]; // elements are from 1 to n-1 and any one number is repeated
	}
	for(i=0;i<n;i++)
	{
		ans = ans^a[i];
	
	}
	for(i=1;i<n;i++)
	{
		ans = ans^i;
	}
	
	cout<<ans;
	return 0;
	
}

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
	cout<<"Array ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	int ans=0;
	for(i=0;i<n;i++)
	{
		ans=ans^a[i];
	}
	cout<<endl<<"Unique element is "<<ans;
	return 0;
}

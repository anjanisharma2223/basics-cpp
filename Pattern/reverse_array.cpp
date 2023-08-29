#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter values of array ";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		
	}
	for(i=n;i>=1;i--)
	{
		cout<<a[i]<<"\t";
	}
	
	return 0;
	
}

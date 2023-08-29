#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	int sum=0;
	cout<<"Enter values of array ";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	cout<<sum;
	return 0;
}

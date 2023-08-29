#include<bits/stdc++.h>
using namespace std;
int sum=0;
void arraysum(int a[],int n)
{
	if(n==0)
	{
		return;
	}
	sum+=a[n-1];
	arraysum(a,n-1);
}
int main()
{
	int n,i;cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	arraysum(a,n);
	cout<<sum;
}

#include<bits/stdc++.h>
using namespace std;
void array(int a[],int n)
{
	if(n==0)
	{
		return;
	}
	cout<<a[n-1]<<" ";
	array(a,n-1);
	
}
int main()
{
	int n,i;cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	array(a,n);
}

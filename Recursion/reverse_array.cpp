#include<bits/stdc++.h>
using namespace std;
void reversearray(int a[],int n,int start, int end)
{
	if(start>end)
	{
		return;
	}
	swap(a[start],a[end]);
	reversearray(a,n,start+1,end-1);
}
int main()
{
	int n,i;cin>>n;
	int a[n];
	int start=0,end=n-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reversearray(a,n,start,end);
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	
}

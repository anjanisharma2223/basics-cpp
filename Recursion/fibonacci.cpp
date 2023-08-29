#include<bits/stdc++.h>
using namespace std;
int sum=0;
void fib(int n)
{
	if(n==0)
	{
		return;
	}
	fib(n-1);
	sum+=n;
	n=sum;
	
	
}
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		fib(i);
	}
	cout<<sum<<" ";
	
}

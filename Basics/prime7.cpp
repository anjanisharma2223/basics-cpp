#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	int i;
	if(n<2 )
	return false;
	else if(n==2)
	return true;
	if(n%2==0)
	return false;
	else
	{
		for(i=3;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
		
	}
}
int main()
{
	int n,m,i;
	cout<<"Enter range ";
	cin>> n>>m;
	for(i=n;i<=m;i++)
	{
	if(isprime(i))
	cout<<i<<endl;
	}
	return 0;
	
}

#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int i;
	bool isprime=true;
	if(n==2)
	{
		isprime=true;
	}
	else if(n<2)
	{
		isprime = false;
	}
	else if(n>2)
	{
		for(i=3;i<sqrt(n);i++)
		{
			if(n%i==0)
			isprime = false;
			break;
		}
		
	}
	if(isprime==false)
	cout<<"Not Prime";
	else cout<<"Prime";
}
int main()
{
	int a;
	cout<<"Enter a number ";
	cin>>a;
	prime(a);
	return 0;
}

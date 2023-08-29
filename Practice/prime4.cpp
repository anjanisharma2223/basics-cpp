#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int i;
	bool isprime = true;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		isprime = false;
		break;
	}
	if(n<2 || isprime == false)
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

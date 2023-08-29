#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number ";
	cin>> n;
	bool isprime=true;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		isprime==false;
		break;
	}
	if(n<2 || isprime==false)
	cout<<"Not prime number ";
	else cout<<"Prime number";
	return 0;
	
}

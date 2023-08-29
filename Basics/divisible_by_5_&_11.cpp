#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<< "Enter a number ";
	cin>> n;
	if(n%5==0 && n%11==0)
	{
		cout<<n <<" is divisible by 5 and 11";
	}
	else if(n%5==0)
	{
		cout<<n <<" is divisible by 5";
	}
	else if(n%11==0)
	{
		cout<<n <<" is divisible by 11";
	}
	else cout<<n << " is neither divisible by 5 nor 11";
}

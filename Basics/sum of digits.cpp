#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b=0;
	cout<< "Enter a number ";
	cin>> n;
	while(n!=0)
	{
		a=n%10;
		b=b+a;
		n=n/10;
		
	}
	cout<< b;
	return 0;
}

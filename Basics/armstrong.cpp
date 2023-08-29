#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cout<< "Enter a number ";
	cin>> n;
	int m=n;
	while(n!=0)
	{
		a=n%10;
		b=b+a*a*a;
		n=n/10;
	}
	if(b==m)
	cout<< "Armstrong";
	else cout<< "Not Armstrong";
	return 0;
}

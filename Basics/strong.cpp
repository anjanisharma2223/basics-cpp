#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter a number ";
	cin>> n;
	int a,b,m=n;
	while(n!=0)
	{
		a=n%10;
		b=b+a*a;
		n=n/10;
	}
	if(b==m)
	cout<< "Strong number ";
	else cout<< "Not Strong Number ";
	return 0;
}

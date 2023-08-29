#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<< "Enter a number ";
	cin>> n;
	int a,b,m=n;
	while(n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	if(b==m)
	cout<< "Palindrome Number";
	else cout<< "Not Palindrome Number ";
}

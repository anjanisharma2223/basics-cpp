#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<< "Enter a number ";
	cin>> n;
	int count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count>2)
	cout<< "Not prime number";
	else cout<< "Prime number";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count =0;
	cout<< "Enter a number";
	cin>> n;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		count++;
	}
	if(n<2||count>2)
	cout<< "Not prime number";
	else cout<< "Prime number";
	return 0;
}

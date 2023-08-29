#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter a number ";
	cin>> n;
	for(i=2;i<sqrt(n);i++)
	{
		if(n%i==0)
		count++;
	}
	if(n<2||count>0)
	cout<<"Not Prime number ";
	else cout<<"Prime number ";
	return 0;
}

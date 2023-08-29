#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int i,count=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(n<2 || count>2)
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

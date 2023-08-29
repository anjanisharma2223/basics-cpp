#include<bits/stdc++.h>
using namespace std;
void prime(int n)
{
	int i,count=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count>0 || n<2)
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

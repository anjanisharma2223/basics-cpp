#include<bits/stdc++.h>
using namespace std;
void lcm(int a,int b)
{
	int i,l;
	for(i=1;i<=a||i<=b;i++)
	{
		if(a%i==0 || b%i==0)
		l=i;
	}
	cout<<l;
	
}
int main()
{
	int x,y;
	cout<<"Enter 2 numbers ";
	cin>>x>>y;
	lcm(x,y);
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	int i;
	if(n==2)
	return true;
	else if(n<2)
	return false;
	if(n%2==0)
	return false;
	else
	{
		for(i=3;i<=sqrt(n);i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
		
	}
	
}
int main()
{
	int a,b,i;
	cout<<"Enter range ";
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
		if(prime(i))
		cout<<i<<endl;
	}
	return 0;
}

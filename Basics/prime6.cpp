#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"Enter a number ";
	cin>> n;
	if(n==2)
	cout<<"Prime number";
	else if(n>2)
	{
		if(n%2==0)
		cout<<"Not prime number";
		else
		{
			for(i=2;i<sqrt(n);i++)
			{
				if(n%i==0)
				count++;
			}
			if(count>0)
			cout<<"Not prime number";
			else cout<<"Prime number";
		}
	}
	else cout<<"Not prime number";
		
	
	
	return 0;
}

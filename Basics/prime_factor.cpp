#include<bits/stdc++.h>
using namespace std;
void primef(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		while(n%i==0)
		{
			
			cout<<i<<endl;
			n=n/i;
		}
		
	}
	if(n>2)
	cout<<n<<endl;
	
}
int  main()
{
	int n;
	cout<<"Enter a number ";
	cin>> n;
	primef(n);
	return 0;
	
}

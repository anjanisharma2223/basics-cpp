#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<< "Enter a number ";
	cin>> n;
	int i,count=0;

		
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			count++;
		}
		if(n<2||count>0)
		{
			cout<< "Not Prime Number ";
		}
		
		else cout<< "Prime Number ";
	
	return 0;
}

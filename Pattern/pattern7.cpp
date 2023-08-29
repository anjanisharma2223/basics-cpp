#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{
		for(j=0;j<5-i;j++)
		{
			cout<<" ";
		}
		for(k=i;k<=i*2-1;k++)
		{
			cout<<"*";
		}
		for(k=0;k<i-1;k++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}

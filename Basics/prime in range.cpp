#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,m;
	cout<< "Enter a number ";
	cin>> n>>m;
	int count =0;
	for(i=n;i<=m;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count<=2)
	cout<< i<<endl;
	return 0;
	 
}

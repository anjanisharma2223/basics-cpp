#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number ";
	cin>>n;
	while(i<=n)
	{
		i++;
		cout<<"i am inside loop "<<endl;
		if(i==5)
		{
			cout<<"i am at 5"<<endl;
			continue;
		}
		else
		{
			cout<<"I am at "<<i<<endl;
		}
		i++;
	}
	cout<<"I am outside the loop ";
	return 0;
}

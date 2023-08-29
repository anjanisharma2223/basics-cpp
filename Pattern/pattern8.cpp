#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,count=1;
	cout<<"Enter size of array ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<count<<"\t";
			count++;
		}
		cout<<endl;
	}
	return 0;
	
}

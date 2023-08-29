#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Array ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	int first =0,second=1;
	for(i=0;i<n;i++)
	{
		while(second<n)
		{
			swap(a[first],a[second]);
			first+=2;second+=2;
		}
		
	}
	cout<<endl<<"Alternate Reversed array ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}

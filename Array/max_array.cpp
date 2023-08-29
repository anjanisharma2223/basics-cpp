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
	cout<<"Array = ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	int max = INT_MIN;
	cout<<"Maximum element is ";
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max;
	
	
	return 0;
}

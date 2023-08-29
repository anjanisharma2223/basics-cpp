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
	int j;
	int key;
	
	for(i=1;i<n;i++)
	{
		key = a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j]<key){
				break;
			}
			else{
				a[j+1]=a[j];
			}
		}
		a[j+1]=key;
	
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	return 0;
	
}

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
	int low=0;
	int high=n-1;
	while(low<high)
	{
		swap(a[low],a[high]);
		low++;high--;
	}
	
	for(i=0;i<n;i++)
	{
		cout << a[i] << " ";
		
	}
	
	return 0;
	
}

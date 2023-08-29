#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter size of array ";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	int r[m];
	r[n]=a[i];
	int low=0,high=n-1;
	while(low<high)
	{
		swap(a[low],a[high]);
		low++;high--;
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	if(r[n]==a[i])
	cout<<"Palindrome";
	else cout<<"Not Palindrome";
	return 0;
}

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
	int ans=1;
	for(i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-1-i])
			{
				ans=0;
				break;
			}
			
			
	}
	if(ans==1)
	cout<<"Palindrome ";
	else cout<<"Not Palindrome ";
	return 0;
}

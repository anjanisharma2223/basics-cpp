#include<bits/stdc++.h>
using namespace std;
bool isSorted(int a[],int n)
{
	if(n==0||n==1)
	{
		return true;
	}
	if(a[0]>a[1])
	{
		return false;
	}
	else
	{
		bool ans=isSorted(a+1,n-1);
		return ans;
	}
}
int main()
{
	int n,i;cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bool ans=isSorted(a,n);
	if(ans)
	{
		cout<<"Sorted"<<endl;
	}
	else
	{
		cout<<"Not Sorted"<<endl;
	}
}

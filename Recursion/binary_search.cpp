#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int a[],int s,int e,int key)
{
	if(s>e)
	{
		return false;
	}
	int mid=s+(e-s)/2;
	if(a[mid]==key)
	{
		return true;
	}
	if(a[mid]<key)
	{
		bool ans=binarySearch(a,mid+1,e,key);
	}
	else
	{
		bool ans=binarySearch(a,s,mid-1,key);
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
	int key;
	cin>>key;
	bool ans=binarySearch(a,0,n-1,key);
	if(ans)
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}

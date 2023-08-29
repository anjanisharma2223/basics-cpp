#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int a[],int n,int key)
{
	if(n==0)
	{
		return false;
	}
	if(a[0]==key)
	{
		return true;
	}
	else
	{
		bool ans=linearSearch(a+1,n-1,key);
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
	int key;
	cin>>key;
	bool ans=linearSearch(a,n,key);
	if(ans)
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}

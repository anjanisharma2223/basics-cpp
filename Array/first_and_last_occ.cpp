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
	sort(a,a+n);
	int first=0,last=n-1,mid,ans=0;
	mid=first+(last-first)/2;
	int key;
	cout<<"Enter key ";
	cin>>key;
	while(first<=last)
	{
		if(a[mid]==key)
		{
			ans=mid;
			last=mid-1;
		}
		else if(a[mid]>key)
		{
			last=mid-1;
		}
		else first=mid+1;
		mid=first+(last-first)/2;
	}
	cout<<"First occurrence of "<<key <<" is "<<ans<<endl;
	int b=ans;
	first=0,last=n-1,mid,ans=0;
	mid=first+(last-first)/2;
	while(first<=last)
	{
		if(a[mid]==key)
		{
			ans=mid;
			first=mid+1;
		}
		else if(a[mid]>key)
		{
			last=mid-1;
		}
		else first=mid+1;
		mid=first+(last-first)/2;
	}
	cout<<"Last occurrence of "<<key <<" is "<<ans<<endl;
	int c=ans;
	cout<<"Total number of occurance of "<<key<<"is "<<c-b+1;
	return 0;
}

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
	int s=0,e=n-1,mid;
	mid=s+(e-s)/2;
	while(s<e)
	{
		if(a[mid]>=a[0])
		{
			s=mid+1;
		}
		else
		{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	cout<<s<<endl;
	int key;
	cout<<"Enter key ";
	cin>>key;
	if(key<=a[n-1] && a[s]<=key)
	{
		e=n-1;
		mid=s+(e-s)/2;
		while(s<=e)
		{
			if(a[mid]==key)
			{
				cout<<mid;
				break;
			}
			else if(a[mid]>key)
			{
				e=mid-1;
			}
			else
			s=mid+1;
			mid=s+(e-s)/2;
		}
	}
	else
	{
		e=s-1,s=0;
		mid=s+(e-s)/2;
		while(s<=e)
		{
			mid=s+(e-s)/2;
			if(a[mid]==key)
			{
				cout<<mid;
				break;
			}
			else if(a[mid]>key)
			{
				e=mid-1;
			}
			else
			s=mid+1;
			mid=s+(e-s)/2;
		}
		
	}
	return 0;
	
}


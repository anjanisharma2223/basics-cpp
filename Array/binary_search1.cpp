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
	int key;
	cout<<"Enter key ";
	cin>>key;
	int start=0,end=n-1,mid;
	mid=(start + end)/2;
	while(start<=end)
	{
		if(a[mid]==key)
		{
			cout<<mid;
			break;
		}
		else if(a[mid]>key)
		{
			end=mid-1;
		}
		else 
		{
			start = mid+1;
		}
		mid=(start+end)/2;
			
			
	}
	
	
	return 0;
}

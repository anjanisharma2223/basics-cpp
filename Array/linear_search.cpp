#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	printf("Enter size of arrays ");
	cin>>n;
	int A[n];
	int i;
	cout<<"Enter values of array ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		
		
	}
	
	for(i=0;i<n;i++)
	{
		cout<<A[i];
		
	}
	int key;
	cout<<endl<<"Enter Key ";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(A[i]==key)
		cout<<i;
	}
	return 0;
}

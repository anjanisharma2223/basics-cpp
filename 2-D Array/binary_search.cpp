#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter row of array ";cin>>n;
	int m;cout<<"Enter column of array ";cin>>m;
	int arr[n][m];
	cout<<"Enter values of array ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
		
	}
	bool flag=0;
	int i=0,j=m-1;
	int key;cout<<"Enter key ";cin>>key;
	while(i<n && j>=0)
	{
		if(arr[i][j]==key)
		{
			cout<<"Found";
			flag=1;
			break;
		}
		else if(key>arr[i][j])
		{
			i++;
		}
		else
		{
			j--;
		}
	}
	if(flag==0)
	{
		cout<<"Not Found";
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter row of array ";cin>>n;
	int m;cout<<"Enter column of array ";cin>>m;
	
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	bool flag=0;
	int i,j;
	int key;cout<<"Enter key ";cin>>key;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]==key)
			{
				flag=1;
				cout<<i<<" "<<j<<endl;
				break;
			}
			
		}
		if(flag==1)
		break;
	}
	if(flag==1)
	{
		cout<<i<<" "<<j<<endl;
		cout<<"Found";
	}
	else
	{
		cout<<"Not Found";
	}
	
}

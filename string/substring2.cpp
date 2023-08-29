#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter length of string ";cin>>n;
	string s;cout<<"Enter string ";cin>>s;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<s[k];
			}
			cout<<endl;
			
		}
	}
}

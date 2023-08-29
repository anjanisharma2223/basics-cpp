#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter size of 1st array ";cin>>n;
	int a[n];
	int m;cout<<"Enter size of 2nd array ";cin>>m;
	int b[m];
	int c[n+m];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>b[j];
	}
	int i=0,j=0,k=0;
	while(i<n && j<m){
		if(a[i]<b[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		else{
			c[k]=b[j];
			j++;
			k++;
		}
	}
//    for(;((i<n) && (j<m));){
//    	if(a[i]<b[j]){
//			c[k]=a[i];
//			i++;
//			k++;
//		}
//		else{
//			c[k]=b[j];
//			j++;
//			k++;
//		}
//	}
	while(i<n){
		c[k]=a[i];
		k++;
		i++;
	}
	while(j<m){
		c[k]=b[j];
		j++;
		k++;
	}
	for(int i=0;i<n+m;i++)
	{
		cout<<c[i]<<' ';
	}
}

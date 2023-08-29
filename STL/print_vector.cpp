#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter size of vector ";cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<endl;
	vector<int>::iterator it=v.begin();
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<' ';
	}
	cout<<endl;
	for(int x:v)
	{
		cout<<x<<' ';
	}
	cout<<endl;
}

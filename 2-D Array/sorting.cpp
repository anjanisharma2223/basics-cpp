#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	for(int i=0;i<10;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<10;i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<endl;
	sort(v.begin(),v.end(),greater<int>());
	for(int i=0;i<10;i++)
	{
		cout<<v[i]<<' ';
	}
	
}

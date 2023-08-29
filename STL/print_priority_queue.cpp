#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int,vector<int>,greater<int>> pr;
	pr.push(5);
	pr.push(6);
	int n;cout<<"Enter size of priority queue ";cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		pr.push(x);
	}
	cout<<pr.size()<<endl;
	int x=pr.size();
	for(int i=0;i<x;i++)
	{
		cout<<pr.top()<<' ';
		pr.pop();
	}
}

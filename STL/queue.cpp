#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> q;
	q.push(5);
	q.push(6);
	int n;cout<<"Enter size of queue ";cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		q.push(x);
	}
	cout<<q.size()<<endl;
	int x=q.size();
	for(int i=0;i<x;i++)
	{
		cout<<q.front()<<' ';
		q.pop();
	}
}


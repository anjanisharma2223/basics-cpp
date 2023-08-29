#include<bits/stdc++.h>
using namespace std;
queue<int>rev(queue<int>q){
	stack<int>s;
	while(!q.empty())
	{
		int element=q.front();
		q.pop();
		s.push(element);
	}
	while(!s.empty())
	{
		int element=s.top();
		s.pop();
		q.push(element);
	}
	return q;
}
int main(){
	int n;cout<<"Enter number of elements: ";cin>>n;
	queue<int>q;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		q.push(x);
	}
	queue<int>a=rev(q);
	while(!a.empty())
	{
		cout<<a.front()<<' ';
		a.pop();
	}
}

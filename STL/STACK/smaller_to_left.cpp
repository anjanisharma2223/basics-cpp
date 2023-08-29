#include<bits/stdc++.h>
using namespace std;
void SmallerToLeft(int a[])
{
	stack<int>st;
	for(int i=0;i<10;i++)
	{
		int x=a[i];
		while(!st.empty()&&st.top()>=a[i])
		{
			st.pop();
		}
		if(!st.empty())
		{
			a[i]=st.top();
		}
		else
		{
			a[i]=-1;
		}
		st.push(x);
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
}
int main()
{
	int a[10]={5,89,5,24,3,7,8,6,0,1};
	SmallerToLeft(a);
}

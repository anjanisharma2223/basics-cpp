#include<bits/stdc++.h>
using namespace std;
void GreaterToLeft(int a[])
{
	stack<int>st;
	for(int i=0;i<10;i++)
	{
		int x=a[i];
		while(!st.empty() && st.top()<=a[i])
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
void GreaterToRight(int a[])
{
	stack<int>st;
	for(int i=9;i>=0;i--)
	{
		int x=a[i];
		while(!st.empty() && st.top()<=a[i])
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
void SmallerToLeft(int a[])
{
	stack<int>st;
	for(int i=0;i<10;i++)
	{
		int x=a[i];
		while(!st.empty() && st.top()>=a[i])
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
void SmallerToRight(int a[])
{
	stack<int>st;
	for(int i=9;i>=0;i--)
	{
		int x=a[i];
		while(!st.empty() && st.top()>=a[i])
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
	int a[10]={5,9,2,1,0,6,9,41,6,3};
	int b[10]={5,9,2,1,0,6,9,41,6,3};
	int c[10]={5,9,2,1,0,6,9,41,6,3};
	int d[10]={5,9,2,1,0,6,9,41,6,3};
	GreaterToLeft(a);
	cout<<endl;
	GreaterToRight(b);
	cout<<endl;
	SmallerToLeft(c);
	cout<<endl;
	SmallerToRight(d);
	cout<<endl;
}

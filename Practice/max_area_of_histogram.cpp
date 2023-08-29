#include<bits/stdc++.h>
using namespace std;
vector<int> Left(int a[],int n)
{
	stack<int>st;
	vector<int>ans;
	for(int i=0;i<n;i++)
	{
		int x=i;
		while(!st.empty() && a[st.top()]>=a[i])
		{
			st.pop();
		}
		if(!st.empty())
		{
			ans.push_back(st.top());
		}
		else
		{
			ans.push_back(-1);
		}
		st.push(x);
	}
	return ans;
}
vector<int> Right(int a[],int n)
{
	stack<int>st;
	vector<int>ans;
	for(int i=n-1;i>=0;i--)
	{
		int x=i;
		while(!st.empty() && a[st.top()]>=a[i])
		{
			st.pop();
		}
		if(!st.empty())
		{
			ans.push_back(st.top());
		}
		else
		{
			ans.push_back(n);
		}
		st.push(x);
	}
	reverse(ans.begin(),ans.end());
	return ans;
}
int main()
{
	int n;cout<<"Enter length of array: ";cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<int>v=Left(a,n);
	vector<int>ve=Right(a,n);
	int mx=0;
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<ve[i]<<' ';
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		mx=max(mx,a[i]*(ve[i]-v[i]-1));
	}
	cout<<mx;
}

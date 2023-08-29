#include<bits/stdc++.h>
using namespace std;
vector<int> left(int a[])
{
	stack<int>st;
	vector<int> ans;
	for(int i=0;i<7;i++)
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
		else{
			ans.push_back(-1);
		}
		st.push(x);
	}
	return ans;
}
vector<int> right(int a[])
{
	stack<int>st;
	vector<int>ans;
	for(int i=6;i>=0;i--)
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
			ans.push_back(7);
		}
		st.push(x);
	}
	reverse(ans.begin(),ans.end());
	return ans;
	
}
int main()
{
	int a[7]={6,2,5,4,5,1,6};
	vector<int> v = left(a);
	vector<int> ve = right(a);
	for(int i=0;i<7;i++)
	{
		cout<<v[i]<<' ';
	}
	cout<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<ve[i]<<' ';
	}
	int mx=0;
	for(int i=0;i<7;i++)
	{
		mx=max(mx,a[i]*(ve[i]-v[i]-1));
	}
	cout<<endl<<mx;
}

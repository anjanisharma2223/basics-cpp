#include<bits/stdc++.h>
using namespace std;
vector<int> span(int a[])
{
	stack<int>st;
	vector<int> v;
	for(int i=0;i<7;i++)
	{
		int x=i;
		while(!st.empty() && a[st.top()]<=a[i])
		{
			st.pop();
		}
		if(!st.empty())
		{
			v.push_back(x-st.top());
		}
		else if(st.empty())
		{
			v.push_back(x+1);
		}
//		else
//		{
//			a[i]=0;
//		}
		st.push(x);
	}
//	for(int i=0;i<7;i++)
//	{
//		cout<<a[i]<<' ';
//	}
return v;
}
int main()
{
	int a[7]={100,80,60,70,60,75,85};
	vector<int> ans = span(a);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<' ';
	}
}

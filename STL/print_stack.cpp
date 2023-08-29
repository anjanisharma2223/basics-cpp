#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> st;
	st.push(5);
	st.push(6);
	int n;cout<<"Enter size of stack ";cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		st.push(x);
	}
	cout<<st.size()<<endl;
	int x = st.size();
	for(int i=0;i<x;i++)
	{
		cout<<st.top()<<' ';
		st.pop();
	}
}

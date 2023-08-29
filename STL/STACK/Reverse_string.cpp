#include<bits/stdc++.h>
using namespace std;
void reverse(string s)
{
	stack<string> st;
	for(int i=0;i<s.length();i++)
	{
		string ans="";
		while(s[i]!=' ' && i<s.length())
		{
			ans+=s[i];
			i++;
		}
		st.push(ans);
	}
	while(st.empty()==false){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main()
{
	string s="My name is anjani";
	reverse(s);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,int> mp;
	string str;cin>>str;
	for(int i=0;i<str.length();i++)
	{
		mp[str[i]]++;
	}
	for(auto it= mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<' '<<(*it).second<<endl;
	}
}

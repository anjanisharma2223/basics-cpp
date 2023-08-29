#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,int> mp;
	mp['a']=1;
	mp['b']=2;
	mp.insert({'d',4});
	for(pair<char,int> x:mp)
	cout<<x.first<<' '<<x.second<<endl;
	cout<<mp['d']<<endl;
	cout<<mp.at('d')<<endl;
}

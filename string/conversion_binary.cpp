#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;cout<<"Enter a number ";cin>>n;
	string str="";
	int rem;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		if(rem==0)
		{
			str+='0';
		}
		else
		{
			str+='1';
		}
		
		
	}
	reverse(str.begin(),str.end());
	cout<<str;
}

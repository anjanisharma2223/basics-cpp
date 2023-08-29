#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[26]={0};
	string str;
	cout<<"Enter a string =";
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		a[str[i]-97]++;
	}
	for(int i=0;i<26;i++)
	{
		char ch=(char)(i+97);
		if(a[i]!=0)
		cout<<ch<<"="<<a[i]<<endl;
	}
	
}

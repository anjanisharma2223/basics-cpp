#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	str.push_back('a');
	int length=str.length();
	cout<<length<<endl;
	for(int i=0;i<length;i++)
	{
		cout<<str[i]<<' ';
	}
	
}

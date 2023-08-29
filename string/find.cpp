#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a string = ";
	cin>>str;
	cout<<"Enter key = ";
	string i;cin>>i;
	if(str.find(i)!=string::npos)
	{
		cout<<"Found"<<endl;
	}
	else
	cout<<"Not found"<<endl;
}

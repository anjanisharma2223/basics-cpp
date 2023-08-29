#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str,a;
	cout<<"Enter a string = ";
	cin>>str;
	cout<<"Enter first and length = ";
	int i,j;
	cin>>i>>j;
	a=str.substr(i,j);  // i = starting index and j= length of sub-string.
	cout<<a;
}

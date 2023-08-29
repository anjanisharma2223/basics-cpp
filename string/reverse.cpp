#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"Enter a string = ";
	cin>>str;
	int length = str.length();
	int start=0,end=length-1;
	while(start<end)
	{
		swap(str[start],str[end]);
		start++;end--;
	}
	cout<<"Reversed string is "<< str;
}

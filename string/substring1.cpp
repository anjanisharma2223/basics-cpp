#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str,a="";
	cout<<"Enter a string = ";
	cin>>str;
	int start,length;
	cin>>start>>length;
	for(int i=start;i<start+length;i++)
	{
		a+=str[i];
			
	}
	cout<<a;
	
}

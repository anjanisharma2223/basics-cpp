#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=3,b=5,c=6,d=2,e=0;
	e|=a;
	cout<<e<<endl;
	e|=b;
	cout<<e<<endl;
	e|=c;
	cout<<e<<endl;
	e|=d;
	cout<<e<<endl;
	int f=e^15;
	cout<<f;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int y;
	cout<< "Enter a year ";
	cin>> y;
	if(y%100==0)
	{
		if(y%400==0)
		cout<< "Leap Year";
		else cout<< "Not Leap Year";
	}
	else if(y%4==0)
	cout<< "Leap Year";
	else cout<< "Not Leap Year";
}

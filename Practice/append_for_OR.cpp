#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,y;
	cout<<"Enter size of array and final bitwise OR of the array = ";
	cin>>n>>y;
	int a[n],b=0,c=0;
	cout<<"Enter values of array ";
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    b|=a[i];
	    cout<<b<<endl;
	}
	cout<<"Value of b outside loop is = "<<b<<endl;
	c=b^y;
	cout<<"value of c = "<<c<<endl;
	cout<<"the minimum possible value of X = ";
	if((c|b)==y)
	{
	    cout<<c<<endl;
	}
	else
	{
	    cout<<-1<<endl;
	}
	return 0;
}


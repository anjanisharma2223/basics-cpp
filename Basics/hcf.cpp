#include<bits/stdc++.h>
using namespace std;
void hcf(int a,int b)
{
	int i,h;
	for(i=1;i<=a || i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		h=i;
		
		
	}
	cout<< h<<endl;
	
	
	
}
int main()
{
	int x,y;
	cout<<"Enter 2 numbers ";
	cin>>x>>y;
	hcf(x,y);
	return 0;
}

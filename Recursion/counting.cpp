#include<bits/stdc++.h>
using namespace std;
void counting(int n,int i)
{
	cout<<i<<endl;
	if(i==10)
	{
		return;
	}
	counting(n-1,i+1);
}
int main()
{
	int n,i;
	counting(n,i);
}

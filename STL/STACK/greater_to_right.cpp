#include<bits/stdc++.h>
using namespace std;
void GreaterToRight(int a[]){
	stack<int>st;
	for(int i=9;i>=0;i--)
	{
		int x=a[i];
		while(!st.empty()&&st.top()<=a[i])
		{
			st.pop();
		}
		if(!st.empty())
		{
			a[i]=st.top();
		}
		else{
			a[i]=-1;
		}
		st.push(x);
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
}
int main(){
	int a[10]={5,9,2,4,9,2,3,8,9,4};
	GreaterToRight(a);
	
}

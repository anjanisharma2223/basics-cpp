#include<bits/stdc++.h>
using namespace std;
void GreaterToLeft(int a[]){
	stack<int>st;
	for(int i=0;i<10;i++)
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
	int a[10]={36,9,26,4,9,7,2,8,1,0};
	GreaterToLeft(a);
	
}

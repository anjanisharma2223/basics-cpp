#include<bits/stdc++.h>
using namespace std;
void NSE(int arr[],int n)
{
	stack<int> st;
	for(int i=n-1;i>=0;i--)
	{
		int x=arr[i];
		while(!st.empty()&&st.top()>=x)
		{
			st.pop();
		}
		if(!st.empty())
		{
			arr[i]=st.top();
		}
		else
		{
			arr[i]=-1;
		}
		st.push(x);
	}
}
int main(){
	int n=6;
	int arr[n]={2,4,1,7,3,9};
	NSE(arr,n);
}

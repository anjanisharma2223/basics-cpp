#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<int> st;
	int n;cout<<"Enter size of array ";cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum;cout<<"Enter sum ";cin>>sum;
	for(int i=0;i<n;i++)
	{
		int x=sum-a[i];
		if(st.find(x)!=st.end())
		{
			cout<<"Found "<<endl;
			break;
		}
		st.insert(a[i]);
	}
	
	
}

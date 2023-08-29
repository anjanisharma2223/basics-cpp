#include<bits/stdc++.h>
using namespace std;
int raintrapping(int arr[],int n)
{
	int mx=0;
	vector<int> l;
	for(int i=0;i<n;i++){
		mx = max(arr[i],mx);
		l.push_back(mx);
	}
	mx=0;
	vector<int> r(n);
	for(int i=n-1;i>=0;i--){
		mx = max(mx,arr[i]);
		r[i] = mx;
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		ans += (min(l[i],r[i]) - arr[i]);
	}
	return ans;
}
int main()
{
	int arr[3]={6,9,9};
	int ans = raintrapping(arr,3);
	cout<<ans<<endl;
}

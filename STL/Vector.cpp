#include<bits/stdc++.h>
using namespace std;

int main(){
//	int n;
//	
//	vector<int> v;
//	for(int i=0;i<5;i++){
//		int x;
//		cin>>x;
//		v.push_back(x);
//	}
//	for(int i=0;i<5;i++){
//		cout<<v[i]<<' ';
//	}
	int gfg[] = { 5, 6, 7, 7, 6, 5, 5, 6 };
 
    vector<int> v(gfg, gfg + 8); // 5 6 7 7 6 5 5 6
 
    sort(v.begin(), v.end()); // 5 5 5 6 6 6 7 7
 
    vector<int>::iterator lower, upper;
    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);
 
    cout << "lower_bound for 6 at index "
         << (lower - v.begin()) << '\n';
    cout << "upper_bound for 6 at index "
         << (upper - v.begin()) << '\n';
 
    return 0;
}

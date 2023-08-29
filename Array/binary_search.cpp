#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 5 ;
	int a[n] = {40,30,20,10,45};
	sort(a,a+n);
	// 10,20,30,40,45
	int key=45;
	int low = 0 , high = n-1 , mid ;
	while(low<=high)
		{
			
			
			mid=(low+high)/2;
			if(a[mid]==key)
			{
				cout<<mid;
				break;
			}
			else if(a[mid]>key)
			{
				high=mid-1;
			}
			else 
			{
				low=mid+1;
			}
		}
	return 0;
	
}

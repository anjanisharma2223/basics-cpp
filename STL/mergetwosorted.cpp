#include<bits/stdc++.h>
using namespace std;

void mergetwosorted(int a[],int low,int mid,int high){
	int n = mid-low+1,m=high-mid;
	int x[n],y[m];
	for(int i=0;i<n;i++){
		x[i]=a[low+i];
	}
	for(int i=0;i<m;i++){
		y[i]=a[mid+1+i];
	}
	int i=0,j=0,k=low;
	while(i<n && j<m){
		if(x[i]<y[j]){
			a[k]=x[i];
			i++;
			k++;
		}
		else{
			a[k]=y[j];
			j++;
			k++;
		}
	}
	while(i<n){
		a[k]=x[i];
		k++;
		i++;
	}
	while(j<m){
		a[k]=y[j];
		j++;
		k++;
	}
}

void mergesort(int a[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		mergetwosorted(a,low,mid,high);
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
}

#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

double sum(double a,double b){
	return a+b;
}

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int x = sum(a,b);
	double y = sum(2.5,3.1);
	cout<<x<<endl;
	cout<<y<<endl;
}

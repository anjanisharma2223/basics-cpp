#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,e,h,i,s;
	cout<< "Enter marks ";
	cin>>m>>e>>h>>i>>s;
	float total =m+e+h+i+s;
	float avg = total/500;
	float perc = avg*100;
	cout<< "Percentage = "<<perc<<endl;
	if(perc>=90)
	cout<< "A Grade";
	else if(perc>=80)
	cout<< "B Grade";
	else if(perc>=70)
	cout<< "C Grade";
	else if(perc>=60)
	cout<< "D Grade";
	else if(perc<60)
	cout<< "E Grade";
}

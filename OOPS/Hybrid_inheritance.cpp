#include<bits/stdc++.h>
using namespace std;
class parent{
	public:
	string surname = "Sharma";
	string hometown = "Jaipur";
};
	
	
class child1:parent{
	public:
	string name="Anjani";
	int age=18;
	void print(){
		cout<<hometown<<' '<<age<<' '<< name<<' '<<surname<<endl;
	}
};
class car:child1{
	public:
		string car_name="BMW";
		int no=0001;
		void print(){
			cout<<car_name<<' '<<no<<' '<<age<<' '<< name<<endl;
		}
		
};
class child2:parent{
	public:
	string name="Rohan";
	int age=19;
	void print(){
		cout<<hometown<<' '<<age<<' '<< name<<' '<<surname<<endl;
	}
};
int main(){
	child1 A;
	A.print();
	child2 B;
	B.print();
	car c;
	c.print();
	A.age=20;
//	A.hometown="Noida";
	A.name="AJ";
//	A.surname="Shah";
	B.age=21;
//	B.hometown="Delhi";
	B.name="Rohi";
//	B.surname="Sha";
	A.print();
	B.print();

	
}

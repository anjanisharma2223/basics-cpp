#include<iostream>
using namespace std;

class Person{
	public:
	string name;
	int age;
	char gender;
		void print_gender(){
			cout<<gender<<endl;
		}
		void print_name(){
			cout<<name<<endl;
		}
};

class Employee : public Person{
	public:
	int emp_id;
	string post;
	void print(){
		cout<<emp_id<<' '<<post<<endl;
		cout<<name<<' '<<age<<' '<<gender<<endl;
	}
};

int main(){
	Employee e;
	e.name = "Pankaj";
	e.age = 19;
	e.gender = 'M';
	e.emp_id = 102;
	e.post = "SDE";
	e.print();
	Person p;
}

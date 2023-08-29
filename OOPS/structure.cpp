#include<iostream>
using namespace std;

struct Student{
	private:
	int rollno;
	string name;
	int class1;
	int age;
	public:
	Student(){  // non parameterized constructor
		rollno=1;
		name = "XXXX";
		class1 = 10;
		age = 12;
	}
	Student(int rollno,string name,int class1,int age){  // parameterized constructor
		this->rollno = rollno;
		this->name = name;
		this->class1 = class1;
		this->age = age;
	}
	Student(Student &s1){  // copy constructor
		name = s1.name;
		rollno = s1.rollno;
		class1 = s1.class1;
		age = s1.age;
	}
	void inputInfo(){
		cout<<"Enter rollno, name, class and age: "<<endl;
		cin>>rollno>>name>>class1>>age;
	}
	void printinfo(){
		cout<<rollno<<' '<<age<<' '<<name<<' '<<class1<<endl;
	}
};

int main(){
//	Student s1[3];
//	for(int i=0;i<3;i++){
//		s1[i].inputInfo();
//	}
//	for(int i=0;i<3;i++){
//		s1[i].printinfo();
//	}

	Student *s1;
	s1->inputInfo();
	s1->printinfo();
}

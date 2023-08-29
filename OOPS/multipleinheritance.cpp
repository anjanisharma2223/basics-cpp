#include<iostream>
using namespace std;

class College{
	public:
		int college_id;
		string college_name;
		int year;
	
};

class Coaching{
	public:
		string course;
		string coaching_name;
};

class Student: public College,public Coaching{
	public:
	string name;
};

int main(){
	Student s;
	s.coaching_name = "REGex";
	s.college_id = 101;
	s.name = "Anjani";
	s.college_name = "JNU";
	s.year = 2;
	cout<<s.name<<' '<<s.college_name<<' '<<s.coaching_name<<' ';
}

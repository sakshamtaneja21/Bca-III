// multi level inherentance

#include <iostream>
#include <conio.h>
using namespace std;

class Roll{
	protected: int r;
	public:
		void read(){
			cin >> r;
		}
		void show(){
			cout << r;
		}
};
class Person{
	protected: char name[20];
	public:
		void read(){
			cin >> name;
		}
		void show(){
			cout << name;
		}
};
class Student : public Roll, public Person{
	protected: int marks;
	public:
		void reads(){
			cin >> r >> name >> marks;
		}
		void shows(){
			cout << r << " " << name << " " << marks;
		}
};

int main(){
	Student s1;
	cout << "Enter Details: ";
	s1.reads();
	s1.shows();
	getch();
}

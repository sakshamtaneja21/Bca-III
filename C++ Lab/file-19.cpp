//Multiple Inheritance

#include <iostream>
#include <conio.h>
using namespace std;

class A{
	protected: 	int a;
	public:
		void get_a(){
			cout << "Enter A: ";
			cin >> a;
		}
};
class B{
	protected: 	int b;
	public:
		void get_b(){
			cout << "Enter B: ";
			cin >> b;
		}
};
class C : public A, public B{
	public:
		void display(){
			cout << "The value of A is " << a << "\n";
			cout << "The value of B is " << b << "\n";
			cout << "Addition of A and B is "<< a + b;
		}
};

int main(){
	C c;
	c.get_a();
	c.get_b();
	c.display();
	getch();
}

/*
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
}*/
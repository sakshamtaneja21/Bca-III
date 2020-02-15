//Design a class EMPLOYEE. Define data members & member functions without using scope resolution operator (3-9-19)

#include <iostream>
#include <conio.h>

using namespace std;
class employee{
	int emp_no;
	char name[16];
	public : void read(){
		cout << "Enter Details - Emp No & Name: ";
		cin >> emp_no >> name;
	}
	void write(){
		cout << emp_no << " " << name;
	}
};

int main(){
	cout << "18BCAN024\n\n";
	employee e1;
	e1.read();		e1.write();
	getch();
}
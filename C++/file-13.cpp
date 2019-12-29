//Friend Function (17-9-19)

#include <iostream>
#include <conio.h>

using namespace std;
class person;
class money{
	int rs;		int paisa;
	public : void read(){
		cout << "Enter earnings: ";
		cin >> rs >> paisa;
	}
	friend void display(person p, money m);
};
class person{
	char name[16];
	public : void input(){
		cout << "Enter Name: ";		cin >> name;
	}
	friend void display(person p, money m);
};

void display(person p, money m){
	cout << p.name << " earns " << m.rs << "." << m.paisa << " rupees.";
}

int main(){
	cout << "18BCAN036\n\n";
	money m1;		m1.read();
	person p1;		p1.input();
	display(p1, m1);
	getch();
}

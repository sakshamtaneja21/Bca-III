//Swap private data of 2 classes using friend function (1-10-19)

#include <iostream>
#include <conio.h>

using namespace std;
class digit;
class number{
	int a;
	public: void read(){
		cout << "Enter a number: ";		cin >> a;
	}
	void show(){
		cout << "A = "<< a << "\n";
	}
	friend void swap(digit d, number n);
};
class digit{
	int b;
	public: void read(){
		cout << "Enter a number: ";		cin >> b;
	}
	void show(){
		cout << "B = "<< b << "\n";
	}
	friend void swap(digit d, number n);
};

void swap(digit d, number n){
	int temp;
	temp = n.a;	n.a = d.b;	d.b = temp;
	cout << "\nAfter Swapping: \n";
	cout << "A = " << n.a << "\n" << "B = " << d.b;
}

int main(){
	cout << "18BCAN036\n\n";
	number n1;
	digit d1;
	n1.read();
	d1.read();
	cout << "\nBefore swapping:\n";
	n1.show();
	d1.show();
	swap(d1,  n1);
	getch();
}

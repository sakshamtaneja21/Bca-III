//Binary operator ( * ) overloading using friend function (15-11-19)

#include <iostream>
#include <conio.h>
using namespace std;

class Complex{
	int x, y;
	public:
		void read(){
			cout<<"Enter 2 Numbers: ";
			cin >> x >> y;
		}
		friend Complex operator*(Complex c1, Complex c2);
		void display(){
			cout << x << " " << y;
		}
};
Complex operator *(Complex c1, Complex c2){
	Complex c;
	c.x = c1.x * c2.x;
	c.y = c1.y * c2.y;
	return(c);
}

int main(){
	cout << "18BCAN036\n\n";
	Complex c1, c2, mul;
	c1.read();
	c2.read();
	mul = c1 * c2;
	cout << "Multiplication is: ";
	mul.display();
	getch();
}

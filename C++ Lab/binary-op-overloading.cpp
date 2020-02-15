#include <iostream>
using namespace std;

class Complex{
	float x;
	float y;
	public: Complex(float real, float imag){
		x = real;
		y = imag;
	}
	Complex operator + (Complex c2){
		Complex temp;
		temp.x = c1 + c.x;
		temp.y = y + c.y;
		return temp;
	}
	void display(){
		cout << x << " " << y;
	}
};

int main(){
	cout << "18BCAN024\n\n";
	Complex c1, c2, c3;
	c1 = Complex(2.5, 3.5);
	c2 = Complex(7.5, 12.5);
	c3 = c1 + c2;
	c1.display();
	c2.display();
	c3.display();
	return 0;
}
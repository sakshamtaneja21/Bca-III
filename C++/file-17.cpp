//Unary operator ( - ) overloading (15-11-19)

#include <iostream>
#include <conio.h>
using namespace std;

class space{
	int x;		int y;
	public:
		void read(int a, int b){
			x=a;		y=b;
		}
		void display(){
			cout << x << " " << y;
		}
		void operator -();
};

void space::operator -(){
	x=-x;
	y=-y;
}

int main(){
	cout<<"18BCAN036\n\n";
	space s1;
	s1.read(10, -20);
	s1.display();
	-s1;
	s1.display();
	getch();
}

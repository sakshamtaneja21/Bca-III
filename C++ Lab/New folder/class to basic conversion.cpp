//Class type to Basic type Conversion

#include <iostream>
#include <conio.h>
using namespace std;

class student{
	int roll_no;
	public:
		student(int x)	{
			roll_no = x+10;
		}
		operator float(){
			return float(roll_no)/2;
		}
		void show(){
			cout << roll_no << "\n";
		}
};

int main(){
	float f;
	student s1(20);
	s1.show();
	f = s1;
	cout << f;
}
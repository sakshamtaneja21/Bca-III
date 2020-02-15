//Single-level Inheritance (15-11-19)

#include <iostream>
#include <conio.h>
using namespace std;

class base{
	public:
		int x;
		void getdata(){
			cout << "Enter the value of X = ";
			cin >> x;
		}
};
class derive : public base{
	private:
		int y;
	public:
		void readdata(){
			cout << "Enter the value of Y = ";
			cin >> y;
		}
		void sum(){
			cout << "Sum of X & Y = " << x + y;
		}
};

int main(){
	cout << "18BCAN024\n\n";
	derive a;
	a.getdata();
	a.readdata();
	a.sum();
	getch();
}
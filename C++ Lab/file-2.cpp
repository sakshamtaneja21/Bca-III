//Swapping Values (27-8-19)

#include <iostream>
#include <conio.h>

int main(){
	using namespace std;
	cout <<"18BCAN024\n\n";
	int x, y, t;
	cout << "Enter 2 numbers X & Y: ";
	cin >> x >> y;
	t = x;	x = y;	y = t;
	cout << "X is now " << x;
	cout << "\nY is now " << y;
	getch();
}
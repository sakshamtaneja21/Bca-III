//Read & Write Values of different Data Types (27-8-19)

#include <iostream>
#include <conio.h>

int main(){
	using namespace std;
	cout <<"18BCAN024\n\n";
	int x;	char a[10];		float f;
	cout << "Enter a number: "; cin >> x;
	cout << "Enter a character: "; cin >> a;
	cout << "Enter a decimal value: "; cin >> f;
	cout << "\nEntered values are:\n";
	cout << x <<"\t";
	cout << a <<"\t";
	cout << f;
	getch();
}
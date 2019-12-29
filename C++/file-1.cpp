//Arithmetic Operations (27-8-19)

#include <iostream>
#include <conio.h>

int main(){
	using namespace std;
	cout << "18BCAN024\n\n";
	int x, y, sum, diff, prod, quo;
	cout << "Enter 2 numbers ";
	cin >> x >> y;
	sum = x+y;		diff = x-y;
	prod = x*y;		quo = x/y;
	cout << "Sum is " << sum;
	cout << "\nDifference is " << diff;
	cout << "\nProduct is " << prod;
	cout << "\nQuotient is " << quo;
	getch();
}
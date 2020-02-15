//Largest of 9 Numbers using Ternary Operator (17-9-19)

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	cout << "18BCAN024\n\n";
	int i, e, f;
	cout << "Enter 10 Numbers: ";
	cin >> f;
	for (i = 1; i < 10; i++){
		cin >> e;
		f = (e > f ? e : f);
	}
	cout << "Largest Number is " << f;
	getch();
}
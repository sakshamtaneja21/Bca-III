//Star Pattern (27-8-19)

#include <iostream>
#include <conio.h>

int main(){
	using namespace std;
	cout << "18BCAN024\n\n";
	int i, j;
	for (i = 0; i <= 5; i++){
		for (j = 0; j < i; j++){
			cout << "*";
		}
		cout << "\n";
	}
	getch();
}
//Pattern (3-9-19)

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	cout << "18BCAN024\n";
	int i, j;
	for (i = 0; i <= 5; i++){
		for (j = 0; j < i; j++){
			cout << ((char) (j+65));
		}
		cout << "\n";
	}
	getch();
}
//Inline Function (1-10-19)

#include <iostream>
#include <conio.h>

using namespace std;
inline int sum(int a, int b){
	return a+b;
}
inline int cube(int n){
	return n * n * n;
}

int main(){
	cout << "18BCAN024\n\n";
	cout << "Sum is " << sum(12332, 78945) << "\n";
	cout << "Cube is " << cube(19);
	getch();
}
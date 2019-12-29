//Inline Function (1-10-19)

#include <iostream>
#include <conio.h>

using namespace std;
inline int sum(int a, int b){
	return a+b;
}
inline int cube(int x){
	return x*x*x;
}

int main(){
	cout << "18BCAN036\n\n";
	cout << "Sum is " << sum(12332, 78945);
	cout << "\n";
	cout << "Cube is " << cube(19);
	getch();
}

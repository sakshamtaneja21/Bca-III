//Inline Functions (11-9-19 - Class)

#include <iostream>
#include <conio.h>

using namespace std;
inline float mul (float x, float y){
	return (x*y);
}
inline double div (double p, double q){
	return (p/q);
}

int main(){
	float a = 12.34;
	float b = 9.82;
	cout << mul(a, b) << "\n" << div(a, b);
	getch();
}
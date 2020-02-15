//Leap Year Checker (27-8-19)

#include <iostream>
#include <conio.h>

int main(){
	using namespace std;
	cout << "18BCAN024\n";
	int yr, i;
	while(1){
	cout << "\nEnter a year ";
	cin >> yr;
	if (( yr%4 == 0 ) && ( yr%100 != 0 ))
		cout << "This is a Leap Year";
	else if (( yr%100 == 0 ) && ( yr%400 == 0 ))
		cout << "This is a Leap Year";
	else if ( yr%400 == 0 )
		cout << "This is a Leap Year";
	else
		cout << "This is not a Leap Year";
	}
	getch();
}
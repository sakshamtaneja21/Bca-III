#include<iostream>
using namespace std;
#include<conio.h>
//write a program to implement a program of inline program

inline int cube(int s)
{
	return s*s*s;
}
int main()
{
	cout << "The cube of 3 is: " << cube(3) << "\n";
	return 0;
} //Output: The cube of 3 is: 27


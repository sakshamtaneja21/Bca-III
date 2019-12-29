//File handling - adding values to file (19-11-19)

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream file;
	file.open("abc.txt");
	int i, val;
	for(i = 0; i < 10; i++){
		cout << "Enter a value: ";
		cin >> val;
		file << val << "\n";
	}
	file.close();
}
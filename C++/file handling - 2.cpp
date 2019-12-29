//File handling - reading values from file (19-11-19)

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream file;
	file.open("abc.txt");
	int i, val;
	for(i = 0; i < 10; i++){
		file >> val;
		cout << val << "\n";
	}
	file.close();
}
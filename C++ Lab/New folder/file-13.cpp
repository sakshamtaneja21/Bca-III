// Array of objects (11-9-19 - Class)

#include <iostream>
#include <conio.h>

using namespace std;
class employee {
	char name[16];
	int age;
	public : void input();
	void output();
};
void employee::input(){
	cin >> name >> age;
}
void employee::output(){
	cout << name << " " << age;
}
int main(){
	cout << "18BCAN024\n\n";
	employee manager[2];
	int i;
	for(i = 0; i < 2; i++){
		cout << "Enter details - Name & Age: ";
		manager[i].input();
	}
	for (i = 0; i < 2; i++){
		cout << "\nDetails are: ";
		manager[i].output();
	}
	getch();
}
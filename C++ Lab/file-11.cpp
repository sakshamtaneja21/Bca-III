//Constructors & De-constructors (10-9-19)

#include <iostream>
#include <conio.h>

using namespace std;
class money{
	int rs, paisa;
	public : money();		money(int r, int p);
	money (money &m);		~money();
	void read();	void show();
};

money::money(){
	rs = paisa = 0;
}
money::money(int r, int p){
	rs = r;		paisa = p;
}
money::money(money &m){
	rs = m.rs;		paisa = m.paisa;
}
void money::read(){
	cin >> rs >> paisa;
}
void money::show(){
	cout << rs << " " << paisa;
}
money::~money(){ }

int main(){
	cout << "18BCAN024\n\n";
	money m1, m4;
	cout << "1st amount: ";
	m1.show();
	money m2(100, 20);
	cout << "\n2nd amount: ";
	m2.show();
	money m3(m2);
	cout << "\n3rd amount: ";
	m3.show();
	cout << "\nEnter an amount: ";
	m4.read();		m4.show();
	getch();
}
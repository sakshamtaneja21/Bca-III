#include <iostream>
#include <conio.h>
using namespace std;

class hour;
class Minute{
	int m;
	public:
		Minute(int x){
			m = x;
		}
		hour(){
			hour h1;
			h1.h = m/60;
			return (h1);
		}
		void show(){
			cout << "Minutes = " << m;
		}
};
class hour{
	int h;
	public:
		hour(){
			h = 0;
		}
		void show(){
			cout << h;
		}
};

int main(){
	Minute Min(60);
	hour hr;
	hr = Min;
	Min.show();
	hr.show();
	getch();
}
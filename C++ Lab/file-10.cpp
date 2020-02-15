//Prime or Not Prime (10-9-19)

#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	cout << "18BCAN024\n";
	while(1){
		int i,n,f = 0;
		cout << "\nEnter a number: ";
		cin >> n;
		for(i = 2; i <= n; i++){
			if(n%i == 0){
					f=1;
					break;
			}
		}
		if(f == 1)
			cout << "Not Prime";
		else
			cout << "Prime";
	}
	getch();
}
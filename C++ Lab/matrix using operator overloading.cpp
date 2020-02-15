#include<iostream>
#include<conio.h>
using namespace std;

class matrix{
	int a[2][2];
	public:
		void input(){
			cout<<"Enter Matrix Element (2 X 2) : ";
			for(int i = 0; i < 2; i++){
				for(int j = 0; j < 2; j++){
					cin>>a[i][j];
				}
			}
		}
		void display(){
			for(int i = 0; i < 2; i++){
				for(int j = 0; j < 2; j++){
					cout << a[i][j] << " ";
				}
				cout << "\n";
			}
		}
		void operator +(matrix x){
			int mat[2][2];
			for(int i = 0; i < 2; i++){
				for(int j = 0; j < 2; j++){
					mat[i][j] = a[i][j] + x.a[i][j];
				}
			}
			cout<<"\nSum of Matrix: \n";
			for(int i = 0; i < 2; i++){
				for(int j = 0; j < 2; j++){
					cout << mat[i][j] << " ";
				}
				cout<<"\n";
			}
		}
};

int main(){
	matrix m, n;
	m.input();	n.input();
	cout<<"\nFirst Matrix:\n";	m.display();
	cout<<"\nSecond Matrix:\n";	n.display();
	m + n;
	getch();
}
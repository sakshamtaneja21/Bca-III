#include<iostream>
using namespace std;
#include<conio.h>

class student 
  {  
      int roll_no;
      char name[20];

public: void read()   
        void show()

  };

void student::read()
    {
        cout<<"Enter the Details";
        cin >> roll_no >>name;
    }
void student::show()
    {
        cout<<"Result is";
        cin >> roll_no >>name;
    }
void  main()
    {   
        getch();
        student s1;
        s1.read;
        s1.show;

    }

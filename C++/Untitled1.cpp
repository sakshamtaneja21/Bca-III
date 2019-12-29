#include<conio.h>
#include<iostream>
using namespace std;
class money
  {  
      int rs;
      int paisa;

public:  money();
         money(int r, int p);
         money(money &m);
         ~money();
         
         void read();
         void show();
  };
  
   money::money()
     { rs=paisa=0;
	 }
	 
   money::money(int r, int p)
     { rs=r;
       paisa=p;
	 }

   money::money(money &m)
     { rs=m.rs;
       paisa=m.paisa;
	 }
	 
	 void money::read()
	  { cin >> rs >> paisa;
	  }

     void money::show()
	  { cout << rs << paisa;
	  }
     
     money::~money()
     {
	 }
	 

int  main()
    {   
        money m1, m4;
        cout<<"first amount is";
		 m1.show();
		money m2(100,20);
		cout<<"second amount is";
		m2.show();
		money m3(m2);
		cout<<"third amount is";
		m3.show();
		cout<<"enter an  amount ";
		m4.read();
		m4.show();
        getch();
        

    }

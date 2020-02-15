#include<iostream>
#include<fstream>
using namespace std;
int main()
{
      ofstream fos("student.txt");
      fos<<1<<"Abhay"<<endl;
      fos<<2<<"Amit"<<endl;
      fos.close();
      return 0;
}
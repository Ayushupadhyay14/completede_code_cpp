// tellg and tellp function in cpp

#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
char ch;
fin.open("day1");
int pos;
pos=fin.tellg();
cout<<pos;
fin>>ch;
pos=fin.tellg();
cout<<pos;
return 0;
}
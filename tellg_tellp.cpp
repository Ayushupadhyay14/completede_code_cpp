// tellg and tellp function

#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
fin.open("AYUSH");
int pos;
pos=fin.tellg();
cout<<pos;
return 0;
}
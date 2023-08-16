//Program to copy data from one file to another
#include<iostream>
#include<fstream>
using namespace std;
//#include<conio.h>
void copyFile(char *f1,char*f2)
{
    ifstream fin;
    ofstream fout;
    fin.open(f1)
    fout.open(f2)
    ch*fin.get();
    while (!fin.eof())
    {
    fout<<ch;
    }
    

}
int main(){

return 0;
}
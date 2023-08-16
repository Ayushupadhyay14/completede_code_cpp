#include<iostream>
using namespace std;
void add(float a,float b)
{
cout<<"the result is :="<<a+b<<endl;
}
void add(double a,double b)
{
    cout<<"the result is:="<<a+b<<endl;
}
int main(){
add(23.45,789.5);
add(3.4,5.6);
return 0;
}
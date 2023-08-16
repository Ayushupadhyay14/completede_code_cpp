#include<iostream>
#include<conio.h>

void add(int a,int b){
	cout<<"the sume is:"<<a+b<<endl;
}
void add(double a,double b){
	cout<<"the result is :"<<a+b;
}

//drived class 
int main()
{
	add(34,56);
	add(34.54,56.8);
}

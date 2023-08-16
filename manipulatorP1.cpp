//THIS IS A MANIPULATORS PROGRAM IN CPP
//HOW TO CREAT MANIPULATOR IN CPP
#include<iostream>
using namespace std;
ostream& money(ostream& upadhyay)
{
    upadhyay << "\t :rupees";
    return upadhyay;
}int main()
{
    int income = 234678;
    cout << "my income is :" << income << money;
}
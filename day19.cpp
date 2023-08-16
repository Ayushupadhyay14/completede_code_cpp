#include <iostream>
using namespace std;

struct student
{
    long char name;
    inr idcode;
    long int mobile;
    char address;
    char depart;
    int enroll;
};
int main()
{
    struct student pradeep;

    pradeep.name = { 'D,'P','A','K'};
    pradeep.idcode = 456565;
    pradeep.mobile = 5665146566;
    pradeep.address = 'S';
    pradeep.depart = 'B';
    pradeep.enroll = 564211;
    cout << "this is a student name is:" << pradeep.name << endl;
    cout << "this is a student idcode:" << pradeep.idcode << endl;
    cout << "this is a student mobile number:" << pradeep.mobile << endl;
    cout << "this is a student address" << pradeep.address << endl;
    cout << "this is  a student depart:" << pradeep.depart << endl;
    cout << "this is a studen enroll:" << pradeep.enroll << endl;

    return 0;
    }

#include <iostream>

using namespace std;

// struct student
// {
//     int id;
//     int clas;
//     char subject;
//     char name;
// };
// int main()
// {
//     struct student ayush;
//     ayush.id = 123;
//     ayush.clas = 12;
//     ayush.subject = 'pcm';
//     ayush.name = 'A';

//     cout << "ayush id:" << ayush.id << endl;
//     cout << "ayush clas:" << ayush.clas << endl;
//     cout << "ayush subject:" << ayush.subject << endl;
//     cout << "ayush name:" << ayush.name << endl;

//     return 0;
// }

union money
{
    int rice;
    char car;
    float pound;
};
int main()
{
    union money m1;
    m1.pound = 1200000000000;
    m1.car = 'c';
    m1.rice;

    cout << "money  is ::" << m1.pound << endl;
};
// {
//     struct employee Amit;
//     struct employee Ayush;
//     struct employee SAchin;
//     struct employee Rohit;

//     Amit.Ide = 123;
//     Amit.favchar = 'A';
//     Amit.salary = 1200000;

//     /* data */

//     // cout << "class number is :" << btech.roomN << endl;
//     // cout << "subject name is :" << btech.subject << endl;
//     // cout << "studen name :" << btech.name << endl;
//     // cout << "student dob is :" << btech.dob << endl;
//     // cout << "student adress is : " << btech.address << endl;
//     // return 0;
//     cout << "employee id is :" << Amit.Ide << endl;
//     cout << "favchar is a :" << Amit.favchar << endl;
//     cout << "Amit.salary is " << Amit.salary << endl;
//     cout << "\n";
//     cout << "Ayush id is :" << Ayush.Ide << endl;
//     cout << "Ayush id is :" << Ayush.favchar << endl;
//     cout << "Ayush id is :" << Ayush.salary << endl;
// };

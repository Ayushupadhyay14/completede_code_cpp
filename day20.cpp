#include <iostream>
using namespace std;
struct school
{
    char name;
    int number;
    int Id;
    float fees;
    char add;
};

int main()
{
    struct school ayush;
    ayush.Id = 1236;
    ayush.name = 'A';
    ayush.fees = 24.54;
    ayush.add = 'dsdsds';

    // ayush.class=dsdsad;
    cout
        << "the value of " << ayush.Id << endl;
    cout << "the value of " << ayush.name << endl;
    cout << "the value of " << ayush.fees << endl;
    cout << "the value of " << ayush.add << endl;
}
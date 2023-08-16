#include <iostream>
using namespace std;

int main()
{
    signed int a, b;
    int choice;

    cout << "1-addtion" << endl;
    cout << "2-substion" << endl;
    cout << "3-multiplication" << endl;
    cout << "4-division" << endl;
    cout << "5-remendar" << endl;
    cout << "6-Enter your choice:" << endl;
    cin >> choice;
    if (6 >= choice)
    {
   

        cout << "enter first number:" << endl;
        cin >> a;
        cout << "enter second number:" << endl;
        cin >> b;

        switch (choice)
        {
        case1:
            cout << "the sum of tow number:" << a + b << endl;
            break;
        case 2:
            cout << "the sbu of tow number:" << a - b << endl;
            break;
        case 3:
            cout << "the multi of tow number:" << a * b << endl;
            break;
        case 4:
            cout << "the divide of tow number:" << a / b << endl;
            break;
        case 6:
            cout << "the remendar of tow number:" << a % b << endl;
            break;
        case 7:
            cout << "please enter your choice:" << endl;
            break;
        }
    }

    else
    {

        // case 8:
        // default:
        // case 9:
        cout
            << "PLEASE ENTER CORRECT NUMBER:"
            << endl;
        // break;
        return 0;
    }
}

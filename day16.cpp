#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;

    
    char op;
    cout << "please select your :" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "result is=" << (a + b) << endl;

        break;
    case '-':
    { cout << "result is=" << (a - b) << endl;}
    break;
    case '*':
        cout << "result is=" << (a * b) << endl;
        break;
    case '/':
        cout << "result is=" << (a / b) << endl;
        break;
    case '%':
        cout << "result is=" << (a % b) << endl;
        break;
    default:
        cout << "enter corrret input::" << endl;
        break;
    }
    return 0;
}
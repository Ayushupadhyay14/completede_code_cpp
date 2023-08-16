#include <iostream>
using namespace std;

int main()

{
    int i, t;
    for (i = 1; i < 20; i++)

    {
        for (t = 1; t < i; t++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
// {
//     int a = 123;
//     cout << a << endl;
//     char B = 'A';
//     cout << B << endl;
//     float d = 3.14;
//     cout << d << endl;
//      double e = 23.33;
//     double size = sizeof(e);
//     cout << "size of float=" << size << endl;

// }
// {
//     int c = 'a';
//     cout << c << endl;
//     char d = 90;
//     cout << d << endl;
//     return 0;
// }
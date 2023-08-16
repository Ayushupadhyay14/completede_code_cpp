#include <iostream>
using namespace std;

int main()
{
   /*THIS IS A LOGICAL OPERATOR 
   IN C++ TUTORIAL*/
    cout << "a&&b is::" << ((1 && 1)) << endl; // 1
    cout << "a&&b is::" << ((1 && 0)) << endl; // 0
    cout << "a&&b is::" << ((0 && 1)) << endl; // 0
    cout << "a&&b is::" << ((0 && 0)) << endl; // 0
    cout << "a|b is::" << ((1 | 1)) << endl;   // 1
    cout << "a|b is::" << ((0 | 1)) << endl;   // 1
    cout << "a|b is::" << ((1 | 0)) << endl;   // 1
    cout << "a|b is::" << ((0 | 0)) << endl;   // 0
    cout << "a!b is::" << ((!1)) << endl;      // 0
    cout << "a!b is::" << ((!0)) << endl;      // 1

    return 0;
}

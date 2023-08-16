#include <iostream>
using namespace std;

int main()
{

    /*bit wise operator in c++*/

    cout << "bitwise AND::" << ((1 & 1)) << endl;
    cout << "bitwise AND::" << ((1 & 0)) << endl;
    cout << "bitwise AND::" << ((0 & 1)) << endl;
    cout << "bitwise AND::" << ((0 | 0)) << endl;
    cout << "bitwise OR::" << ((1 | 1)) << endl;
    cout << "bitwise OR::" << ((1 | 0)) << endl;
    cout << "bitwise OR::" << ((0 | 1)) << endl;
    cout << "bitwise OR::" << ((0 | 0)) << endl;
    cout << "bitwise XOR::" << ((1 ^ 1)) << endl;
    cout << "bitwise XOR::" << ((0 ^ 1)) << endl;
    cout << "bitwise XOR::" << ((1 ^ 0)) << endl;
    cout << "bitwise XOR::" << ((0 ^ 0)) << endl;
    cout << "bitwise NOT::" << ((!1)) << endl;
    cout << "bitwise NOT::" << ((!0)) << endl;
    cout << "bitwise COMPLIMENT::" << ((~1)) << endl;
    cout << "bitwise COMPLIMENT::" << ((~0)) << endl;
    // cout << "bitwise LEFT SIDE::" << ((1 >>)) << endl;


    return 0;
    
}
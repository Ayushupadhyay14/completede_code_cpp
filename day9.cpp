#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *b = &a;
    // int b;
    //  &---> Address of operator

    
    // *----> dereferance operator
    // int a=*&b;
    cout << "the value of this function:" << ((a)) << endl;
    cout << "the address operator is:" << ((&a)) << endl;
    cout << "the star operator is :" << ((*&b)) << endl;
    cout << "the star operator is :" << ((*b)) << endl;

    // pointer to pointer
    int **c = &b;
    cout << "the address of b is " << &b << endl;
    cout << "the address of b is " << c << endl;
    cout << "the adress value -at(value -at(c)) is " << **c << endl;
    
    return 0;
}
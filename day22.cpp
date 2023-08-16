#include<iostream>
using namespace std;

class myclass
{
private:
    int a, b, c;
public:
    int d, e;
    void setData(int a, int b, int c);
    void getData() {
        cout << "the value of a is" << a << endl;
        cout << "the value of a is" << b << endl;
        cout << "the value of a is" << c << endl;
        cout << "the value of a is" << d << endl;
        cout << "the value of a is" << e << endl;
    }
};

void myclass::setData(int a, int b, int c) {
    a = a1;
    b = b1;
    c = c1;
}
int main() {
    // myclass ayush;
    // a.ayush = 12;
    // b.ayush = 34;
    // cout << "the result is :" << a.ayush << endl;
    // cout << "the result is :" << b.ayush << endl;
    return 0;
}
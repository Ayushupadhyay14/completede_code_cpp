#include<iostream>
using namespace std;
class binary {
    string s;
public:

    void read(void);
    void chk_bin(void);
};

void binary::read(void); {
    cout << "enter the binary number:";
    ci >> > s;
}
void binary::read(void)
{
}
void binary::chk_bin(void) {
    for (int i = 0;i < s.length();i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}
int main() {
    //OOps -> clases and objects
    // c++ --> intially called --> c with clases by srroustroup
    // structures had limitations
    //you can declare object along with the class declartion like this :
    /*class Employee
    class defination
    }ayush harrry lovish;*/
    //Nesting of memberr function
binary b;
b.read;

    return 0;
}
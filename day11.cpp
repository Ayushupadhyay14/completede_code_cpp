#include <iostream>
using namespace std;
// Arrray in c++
int main()
{
    int marks[] = {10, 30, 40, 50};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    int maths[] = {234, 567, 890, 765};
    cout << "this is a arry :" << endl;
    // cout << maths[0] << endl;
    // cout << maths[1] << endl;
    // cout << maths[2] << endl;
    // cout << maths[3] << endl;
    // cout << marks << [4] <<;endl;
    for (int i = 0; i < 3; i++)
    {
        cout << marks[i * i + 1] << endl;
    }
    // POINTR=ER AND ARRAY
    int *p = marks;
    cout << *(++p) << endl;
    cout
     << *(++p) << endl;
    cout<< "the value of marks[0]" << *(p + 1) << endl;
    cout << "the value of marks[0]" << *(p + 2) << endl;
    cout << "the value of marks[0]" << *(p + 3) << endl;
    cout << "the value of marks[0]" << *p << endl;
        //  << endl;
        
    return 0;

}
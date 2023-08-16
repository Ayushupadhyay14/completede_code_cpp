#include<iostream>
using namespace std;
//inline keyword in 
inline float max(float x) {
    return x * x * x;
}

int main()
{
    cout << "Enter ny number :" << max(3.5) << endl;
    //cout << "result Is:" << max(3,4);
};

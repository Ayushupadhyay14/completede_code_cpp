#include<iostream>
using namespace std;
inline int result(int R) { return R * R / R + 2; }
int main() {
    int n;
    //int a=10;
    cout << "Enter any number from user:" << endl;
    cin >> n;
    //int n;
    //cin>>n;
    cout << "result is :" << result(n) << endl;

    return 0;
}
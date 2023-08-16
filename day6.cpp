#include <iostream>

using namespace std;

/*Exapmle of injfinit for loop*/
int main()
{
    // int i;
    // fot(initialization;condition;updation)
    // for (int i = 0; 35 <= 40; i++)
    // {

    //     cout << i << endl;
    // }
    // int i = 0;

    // while (i <= 40)
    // {

    //     cout << i << endl;
    //     i++;
    // }

    // Example while loop in c++

    // int i = 1;

    // while (true)
    // {

    //     cout << i << endl;
    //     i++;
    // }
    // Exapple do while loop in c++
    // isame profit ye rahta hai ki do-while loop ek na ek bar to chalta hi hai
    int i = 1, n = 6;
    // comdition agar false bhi hoti hai to fir bhi ek bar loop chalta hai
    do
    {
        cout << i * n << endl;
        i++;

    } while (i <= 10);

    return 0;
}

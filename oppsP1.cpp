#include <iostream>
using namespace std;

class Hero
{

private:

    int Health = 365;

//   public:

    char level = 'A';

    void print()
    {
        cout << " level " << endl;
    }
    int getheath()
    {
        return Health;
    }
    char getLevel()
    {

        return level;
    }

    int getheath(int h)
    
    {
        Health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()

{
    // creating of object
    Hero ayush;

    // ayush getHealth = (70);
    // ṇcout << "ayusah level is :"<< ayush.setLevel() << endl;
    cout << "ayush health is:" << ayush.gethealth() << endl;
    cout << "ayush health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    cout << "ayush Health is:" << ayush.gethealth() << endl;
    //  cout << "ayush level is:" << ayush.setLevel() << endl;
    return 0;
}
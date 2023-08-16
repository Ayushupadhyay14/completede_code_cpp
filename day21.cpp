#include <iostream>
using namespace std;

struct student
{
    string school;
    string name;
    string cls;
    long int Id;
    float fees;
    //  long int class;
    string number;

    string address;
    int M_math;
    int M_science;
    int M_hindi;
    int M_english;
    int M_computer;
    long int M_total;
    long int M_outof  = 500;
};
int main()
{
    struct student sachin;
    
    cout << "\n STUENT_SACHIN_UPADHYAY_SOME_DEATLIS::\n";
    cout << "\n\n";
    sachin.school = {'s', 'v', 'v', 'v', '_', 'i', 'n', 'd', 'o', 'r', 'e'};

    sachin.name = {'s', 'a', 'c', 'h', 'i', 'n', '_', 'u', 'p', 'a', 'd', 'h', 'y', 'a', 'y'};
    sachin.cls = {"10th"};

    sachin.Id = 452168;

    sachin.fees = 234.654;

    sachin.number = {"8815152801"};

    sachin.address = {"157b vaibhav lakshmi nager indore"};

    sachin.M_math = 60;

    sachin.M_science = 65;

    sachin.M_hindi = 70;

    sachin.M_english = 55;

    sachin.M_computer = 90;

    sachin.M_total = 500;

    sachin.M_outof = 600;

    cout << "resut is this school name :=" << sachin.school << endl;
    cout << "resut is this student name :=" << sachin.name << endl;
    cout << "resut is this student class:=" << sachin.cls << endl;
    cout << "resut is this student Id:=" << sachin.Id << endl;
    cout << "resut is this student fees:=" << sachin.fees << endl;
    cout << "resut is this student number:=" << sachin.address << endl;
    cout << "this is the marks of the studen in this class::" << endl;
    cout << "resut is this student subject _math:=" << sachin.M_math << endl;
    cout << "resut is this student subjr=ect M_science:=" << sachin.M_hindi << endl;
    cout << "resut is this student subject M_hindi:=" << sachin.M_english << endl;
    cout << "resut is this student subject M_english:=" << sachin.M_computer << endl;
    cout << "resut is this student subject _computer:=" << sachin.M_total << endl;
    cout << "resut is this student total marks M_total:=" << sachin.M_outof << endl;
    cout << "resut is this student total marks out _of:=" << sachin.M_outof << endl;

    return 0;
}
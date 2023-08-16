
//filehandling program in cpp
#include<iostream>
#include<fstream>//fstream libary uses file handling 

using namespace std;
int main() {
    ofstream onFile;//write data header file
    onFile.open("C:\\Users\\Lenovo\\Desktop\\file.txt");
    onFile << "hello ji kaise ho sare:\n";
    onFile << "this is a file handling concept in cpp:\n";
    onFile << "welcome to my vloge:\n";
    onFile.close();
    cout << "File created succesfully:";
    onFile.close();

    return 0;
}



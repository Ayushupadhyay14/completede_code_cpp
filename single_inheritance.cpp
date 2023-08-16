//single inheritance in cpp
#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    protected:
    void setData(int k)
    {a=k;}
};
class B:public A;
{
    public:
    void setData(int x)
    (setData;)
};
int main(){
B obje;
return 0;
}
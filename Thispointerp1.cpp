//THIS POINTER IN CPP PROGRAM HOW TO CREATE THIS POINTER IN C++
#include<iostream>
using namespace std;
class panku
{
    private:
    int y,h,w;
    public:
    void setproparty(int x,int y,int z)
    {y=x;h=y;w=z;}
    void showproparty(){
cout<<" y=: "<<y<<" h= "<<h<<" w= "<<w;
    }
 
};
int main(){
panku b1;
//cout<<"enter three proparty:"<<endl;
b1.setproparty(23,67,89);
b1.showproparty();
return 0;
}
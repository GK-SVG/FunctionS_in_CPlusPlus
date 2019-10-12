//function overloading in c++
//function only can overloaded in same class not in inhrtited derived class
#include<iostream>
using namespace std;

class A
{
public:
     void print ()
    { cout<< "normal print()" <<endl; }

    //function overloaded
    void print(string s)
    { cout<<"this is overloaded print(string) : " <<s<<endl; }

    void show ()
    { cout<< "normal show()" <<endl; }

    //overloaded function;
    void show(int a)
    {  cout<<"this is overloaded show(int)"<<a;}

};

     int main()
     {
        A obj;
        obj.print();
        obj.print("Gautam");
        obj.show();
        obj.show(4);
         return  0;
     }

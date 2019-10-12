// Function Overriding in c++
#include<iostream>
using namespace std;

class BaseClass
{
public:
     virtual void Display()
    {
        cout << "\nThis is Display() method"
                " of BaseClass";
    }
    void Show()
    {
        cout << "\nThis is Show() method "
                "of BaseClass";
    }
    void Show(int a)
    {
         cout<<"\n This is base class Show(int) : "<<a;
    }
};

class DerivedClass : public BaseClass
{
public:
    // Overriding method - new working of
    // base class's display method
    void Display()
    {
        cout << "\nThis is Display() method"
                " of DerivedClass";
    }
};

// Driver code
int main()
{
    DerivedClass obj;
    obj.Display();
    obj.Show();
    obj.Show(3);
    return  0;
}

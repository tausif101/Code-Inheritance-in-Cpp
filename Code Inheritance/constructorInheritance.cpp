#include<iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"Default constructor of Base Class"<<endl;
        }
        Base(int a, int b)
        {
            cout<<"Parametarized constructor of Base Class: "<<a<<endl;
            cout<<"Parametarized constructor of Base Class: "<<b<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Default constructor of Derived Class"<<endl;
        }
        Derived(int x)
        {
            cout<<"Parametarized constructor of Derived Class: "<<x<<endl;
        }
        Derived(int a , int x, int y) : Base(x,y)
        {
            cout<<"Parameter of Derived class: "<<a<<endl;
        }
};

int main()
{   
    cout<<"\n\n";
    Derived r(10,5,6);
    return 0;
}
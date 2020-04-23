#include<iostream>
using namespace std;

class Base{
    public:
        void display(){
            cout<<"Display function of Base class"<<endl;
        }

};

class Derived : public Base
{
    public:
        void display(){
            cout<<"Display function of Derived class"<<endl;
        }
};


int main(){
    Derived *ptr;
    ptr = new Derived();
    ptr->display();

    return 0;
}
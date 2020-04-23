#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
        int id;
        string name;
    public:
        void setID(int id);
        void setName(string name);
        int getID();
        string getName();    
};

void Employee :: setID(int id)
{
    this->id = id; 
}

void Employee :: setName(string name)
{
    this->name = name; 
}

int Employee :: getID()
{
    return id;
}

string Employee :: getName()
{
    return name;
}



class FTE : public Employee
{
    private:
        float salary;

    public:
        FTE(string name,float salary, int id )
        {   
            this->salary = salary;
            setID(id);
            setName(name);

        }

        void display()
        {
            cout<<"Name: "<<getName()<<endl<<"ID: "<<getID()<<endl<<"Salary: "<<salary<<endl;
        }
};





int main()
{
    FTE e1("Tausif", 200.243, 1823 );
    e1.display();
}
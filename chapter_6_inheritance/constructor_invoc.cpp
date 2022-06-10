#include<iostream>
using namespace std;
class base
{
    public:
    // constructor
    base()
    {
        cout<<"This is constructor of base:"<<endl;
    }
    // destructor
    ~base()
    {
        cout<<"This is destructor of base:"<<endl;
    }
};
class derived : public base
{
    public:
    // constructor
    derived()
    {
        cout<<"This is constructor of derive:"<<endl;
    }
    // destructor
    ~derived()
    {
        cout<<"This is destructor of derive:"<<endl;
    }

};
int main()
{
    derived a;
    
}
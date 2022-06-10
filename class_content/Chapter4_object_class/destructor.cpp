#include<iostream>
using namespace std;
class HelloWorld
{
    public:
    // constructer
    HelloWorld()
    {
        cout<<"Constructor is called..."<<endl;

    }
   // destructor
    ~HelloWorld()
    {
        cout<<"Destructor is called....."<<endl;

    }
    // memeber function
    void DIsplay()
    {
        cout<<"HELLO WORLD"<<endl;
    }
    
};
int main()
{
    // creating object
    HelloWorld obj;
    // memeber function called
    obj.DIsplay();
    return 0;
}
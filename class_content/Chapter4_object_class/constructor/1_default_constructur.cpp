#include<iostream>
using namespace std;
class construct
{
    public:
    int a;
    int b;
    construct()
    {
        cout<<"Constructer is called  ";
        a=10;
        b=20;
    }
    void display()
    {
        cout<<"Sarad Shrestha\t"<<endl;
    }
};
int main()
{
    construct c1;
    c1.display();
    cout<<"THe value of a is\t"<<c1.a<<endl;
    cout<<"THe value of b is\t"<<c1.b<<endl;
    

}
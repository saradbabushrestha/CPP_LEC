#include<iostream>
using namespace std;
class binary
{
    private:
    int a,b;
    public:
    binary ()
    {
        
        a=0;
        b=0;
    }
    binary(int c, int d)
    {
        a=c;
        b=d;
    }
    binary operator +(binary obj1)
    {
        binary obj2;
        cout<<"Value of obj2 a inside overloading function:"<<obj2.a<<endl;
        cout<<"Value of obj2 b inside overloading function:"<<obj2.b<<endl;

        cout<<"Value of obj1 a inside overloading function:"<<obj1.a<<endl;
        cout<<"Value of obj1 b inside overloading function:"<<obj1.b<<endl;
        // calling object is pass implicitly and second object is pass through argumment
        obj2.a=a+obj1.a;
        obj2.b=b+obj1.b;
        return obj2;


    }
    void display()
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main()
{
    binary b1,b2,b3;
    b1= binary(10,20);
    b2= binary(30,40);
    b3= b1 + b2; //b3=b1.operator(b2);
    // b1.display();
    // b2.display();
    b3.display();
}
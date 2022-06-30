#include <iostream>
using namespace std;
class A
{
    private:
    int a=10;
    public:
    void display_a()
    {
    cout<<"The value in A is: "<<a<<endl;
    }
};
class B:public virtual A
{
    private:
    int b=5;
    public:
    void display_b()
    {
        cout<<"The value in B is:"<<b<<endl;
    }
};
class C:public virtual A
{
    private:
    int c=3;
    public:
    void display_c()
    {
        cout<<"THe value in C is :"<<c<<endl;
    }
};
class D: public  B,public  C
{
    private:
    int d=1;
    public:
    void display_d()
    {
        cout<<"The value in D is :"<<d<<endl;
    }
};
int main()
{
    D n;
    n.display_a();
    n.display_b();
    n.display_c();
    n.display_d();
}
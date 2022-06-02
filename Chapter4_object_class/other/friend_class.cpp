#include<iostream>
using namespace std;
class myclass1
{
     friend class myclass2;
    private:
    double a;
   
    public:
    myclass1(int x)
    {
        a=x;
    }
};
class myclass2
{
    public:
    myclass2( myclass1 obj)
    {
        cout<<"The marks is "<<obj.a<<endl;
    }

};
int main()
{
    myclass1 obj1(5);
    myclass2 obj2(obj1);
}

#include <iostream>
using namespace std;
class UnaryOperator
{
    private:
    int a,b,c;
    public:
    void getinfo (int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void operator -()
    {
        a=-a;
        b=-b;
        c=-c;
    }
    void display()
    {
        cout<<"The value of a is" <<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of b is" <<c<<endl;
    }
};
int main()
{
    UnaryOperator obj;
    obj.getinfo(-10,20,30);
    obj.display();

    - obj;
    obj.display();
}
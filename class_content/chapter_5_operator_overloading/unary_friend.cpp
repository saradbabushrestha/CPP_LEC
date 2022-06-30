#include<iostream>
using namespace std;
class unaryfriend
{
    private:
    int a=1;
    int b=2;
    int c=3;
    public:
    void display()
    {
        cout<<"Values:"<<a<<"\t"<<b<<"\t"<<c<<endl;
    }
    void friend operator -(unaryfriend &u1);
};
void  operator -(unaryfriend &u1)
{
    u1.a=-u1.a;
    u1.b=-u1.b;
    u1.c=-u1.c;
    
    
}
int main()
{
    unaryfriend f1,f2;
    f1.display();
    -f1;
    f1.display();
}
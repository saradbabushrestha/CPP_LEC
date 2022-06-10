#include <iostream>
using namespace std;
class parent
{
    protected:
    int id_protected;
};
class Child : public parent
{
    public:
    void set_ID(int id)
    {
       
        id_protected=id;
    }
    void display()
    {
        cout<<"ID_Protected is: "<<id_protected<<endl;
    }
};
int main()
{
    Child obj1;
    obj1.set_ID(80);
    obj1.display();
    return 0;
}

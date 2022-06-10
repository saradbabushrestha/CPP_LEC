#include<iostream>
using namespace std;
class base
{
    public:
    void print()
    {
        cout<<"base calling..."<<endl;
    }
};
class derive : public base
{
    public:
    void print()
    {
        cout<<"derive calling..."<<endl;
    }
};
int main()
{
    derive derive1;
    derive1.print();
}
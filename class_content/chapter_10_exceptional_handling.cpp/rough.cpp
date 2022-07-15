#include<iostream>
using namespace std;
class unknown
{
    public:
    unknown()
    {
        cout<<"This is constrcutor."<<endl;
    }
    ~unknown()
    {
        cout<<"This is destrcutor."<<endl;
    }
};
int main()
{
    unknown();
}
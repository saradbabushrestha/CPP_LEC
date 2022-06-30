// after overloading the operator it can be applied to an object in the same way as it is applied to the basic types....
#include<iostream>
using namespace std;
class Count
{
    private:
    int value;
    public:
    Count()
    {
        value=5;
    }
    void operator ++()
    {
        value=value+1;
    }
    void display()
    {
        cout<<"THe value is :"<<value<<endl;
    }

};
int main()
{
    Count n1;
    n1.display();
    
    ++n1;
    n1.display();
}
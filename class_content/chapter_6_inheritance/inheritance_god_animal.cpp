#include<iostream>
using namespace std;
class animal
{
    public:
    void eat()
    {
        cout<<"Eating...."<<endl;
    }
};
class dog: public animal
{
    public:
    void bark()
    {
        cout<<"Barking...."<<endl;
    }
    
};
int main()
{
    dog a;
    animal b;
    a.bark();
    a.eat();
    b.eat();
    // b.bark();
}
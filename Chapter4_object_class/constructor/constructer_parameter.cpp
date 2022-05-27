
#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    string  surname;
    

    student(string x, string y)
    {
        name=x;
        surname=y;      
    }

};

int main()
{
    student s1("sarad","shrestha");
    cout<<"My name is "<<s1.name;
    cout<<" "<<s1.surname<<endl;
}
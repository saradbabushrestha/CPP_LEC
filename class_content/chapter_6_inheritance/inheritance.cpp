#include<iostream>
using namespace std;
class account
{
    public:
    int salary=10000;
};
class programmer : public account
{
    public:
    int bonus=1000;
};
int main()
{
    programmer s1;
    cout<<"The salary is :"<<s1.salary<<endl;
    cout<<"Bonus is :"<<s1.bonus<<endl;
    account s2;
    cout<<"The salary is :"<<s2.salary<<endl;
    // cout<<"Bonus is :"<<s2.bonus<<endl;

}
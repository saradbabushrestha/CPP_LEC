#include<iostream>
using namespace std;
struct student
{
  string name;
  int roll;
  string adress;
};
int main()
{
    student s;
    cout<<"Enter the information of student:"<<endl;
    cout<<"Name:"<<endl;
    cin>>s.name;
    cout<<"Roll:"<<endl;
    cin>>s.roll;
    cout<<"Adress:"<<endl;
    cin>>s.adress;
    cout<<"-----DIsplaying the information------"<<endl;
    cout<<"NAME\t";
    cout<<"ROLL\t";
    cout<<"Adress\t"<<endl;
    cout<<""<<s.name;
    cout<<"\t"<<s.roll;
    cout<<"\t"<<s.adress<<endl;
}
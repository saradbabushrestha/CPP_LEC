#include<iostream>
#include<math.h>
using namespace std;
class studentDetail
{
    private:
    struct student
     {
      string name;
      int roll;
      string adress;
     }s;
    public:
    void input()
    {
    cout<<"Enter the information of student:"<<endl;
    cout<<"Name:"<<endl;
    cin>>s.name;
    cout<<"Roll:"<<endl;
    cin>>s.roll;
    cout<<"Adress:"<<endl;
    cin>>s.adress;
    }
    void display()
    {
        cout<<"-----DIsplaying the information------"<<endl;
    cout<<"NAME\t";
    cout<<"ROLL\t";
    cout<<"Adress\t"<<endl;
    cout<<""<<s.name;
    cout<<"\t"<<s.roll;
    cout<<"\t"<<s.adress<<endl;
    }


};
int main()
{
    studentDetail n;
    n.input();
    n.display();
}
// WAP in c++ to read the record of student: name,adress roll and display.
#include<iostream>
using namespace std;
struct student{
    char name[50];
    int roll;
    char address[50];
};
int main(){
    student s;
    cout <<"Enter information";
    cout <<"Enter Name-"<<endl;
    cin >>s.name;
    cout <<"Enter Roll-"<<endl;
    cin >>s.roll;
    cout <<"Enter Address-"<<endl;
    cin >>s.address;
    cout <<"DISPLAYING INFORMATION"<<endl;
    cout <<"Name- "<<s.name<<endl;
    cout <<"Roll-"<<s.roll<<endl;
    cout <<"Address-"<<s.address<<endl;
    return 0;


}


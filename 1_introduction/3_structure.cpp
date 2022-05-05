// WAP in c++ to read no of record of student: name,adress roll and display.
#include<iostream>
using namespace std;
struct student{
    char name[50];
    char address[50];
    int roll;
}s[5];
int main(){
    int i;
    cout <<"ENTER INFORMATION OF STUDENT"<<endl;
    // using loop and stroing data of 5 student
    for(i=0;i<5;++i){
         cout <<"NAME:"<<endl;
         cin >>s[i].name;
         cout <<"ROLL:"<<endl;
         cin >>s[i].roll;
         cout <<"ADDRESS"<<endl;
         cin >>s[i].address;
                   }
// Displating the stored information
cout <<"DISPLAYING THE INFORMATION"<<endl;
for(i=0;i<5;++i){
    cout<<"NAME:"<<s[i].name<<endl;
    cout<<"ROLL:"<<s[i].roll<<endl;
    cout<<"ADDRESS:"<<s[i].address<<endl;
}
return 0;
}




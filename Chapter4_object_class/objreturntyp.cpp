#include<iostream>
using namespace std;
class Student
{
    public:
    double marks1,marks2;
};
Student createstudent()
{
    Student student;
    student.marks1=90;
    student.marks2=80;

    cout<<"Marks of student 1 is :"<<student.marks1<<endl;
    cout<<"Marks of student 2 is :"<<student.marks2<<endl;
    return student;

};
int main()
{
    Student s1;
    s1= createstudent();
}
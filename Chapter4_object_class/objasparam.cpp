#include<iostream>
using namespace std;
class student
{
    public:
    double marks;
    student (double m)
    {
        marks=m;

    }
    
};
void CalculateAverage(student s1, student s2)
{
    double avg;
    avg=(s1.marks+s2.marks)/2;
    cout<<"The average marks of student is: "<<avg;
}
int main()
{
    student s1(50),s2(60);
    CalculateAverage(s1,s2);
    return 0;
}
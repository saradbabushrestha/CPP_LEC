// WAP to read name roll number and mark that catches multiple exception using exception class if roll is -ve and marks greater than full marks
#include<iostream>
using namespace std;
class student
{
    protected:
    char name[50];
    int Roll;
    
    int Marks;
    public:
    class roll{};
    class marks{};
    void getinfo()
    {
        
        cout<<"Enter student name:"<<endl;
        cin>>name;
        cout<<"Enter roll:"<<endl;
        cin>>Roll;
        if(Roll<0)
        {
            throw roll();
              
        }
        cout<<"Enter marks:"<<endl;
        cin>>Marks;
        if(Marks>100)
        {
            throw marks();
        }
    }
    void showdata()
    {
        cout<<"Student Name :"<<name<<endl;
        cout<<"ROll: "<<Roll<<endl;
        cout<<"Marks: "<<Marks<<endl;
    }
    

};
int main()
{
    student s;

    try {
        s.getinfo();
        s.showdata();
    }
    

       catch(student::roll)
    {
        cout<<"ERROR : Roll number cant be in negative"<<endl;
    }
    catch(student::marks)
    {
        cout<<"ERROR : MArks cant be greater than 100"<<endl;
    }
    return 0;


}
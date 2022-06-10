#include<iostream>
using namespace std;
class wall
{
    private:
    double length,height;
    public:
    wall()
    {
        length=2;
        height=3;
    }
    wall(double len)
    {
        length=len;
        height=9;
    }
    wall(double len,double hei)
    {
        length=len;
        height=hei;
    }
     double CalculateArea()
    {
        return length*height;
    }
};
int main()
{
    wall n1;
    wall n2(23);
    wall n3(23,23);
    cout<<"The area is "<<n1.CalculateArea()<<endl;
    cout<<"The area is "<<n2.CalculateArea()<<endl;
    cout<<"The area is "<<n3.CalculateArea()<<endl;
    
   
}
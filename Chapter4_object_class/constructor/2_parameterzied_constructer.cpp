#include<iostream>
using namespace std;
// Declaring class
class wall
{
    private:
    double length;
    double height;

    public:
    // parametrxied constructer
    wall(double len ,double hei)
    {
        length=len;
        height=hei;
    }
    wall(wall &obj)
    {
        length=obj.length;
        height=obj.height;
    }
    double CalculateArea()
    {
        return length*height;
    }
};
int main()
{
    wall n1(5.5,5.5);
    cout<<"The area of wall is " << n1.CalculateArea();

}
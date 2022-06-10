#include<iostream>
#include<math.h>
using namespace std;
class TriangleArea
{
    private:
    float a, b, c, s, area;
    public:
    void input()
    {
    cout<<"Enter the length of first side: "<<endl;
    cin>>a;
    cout<<"Enter the length of second side: "<<endl;
    cin>>b;
    cout<<"Enter the length of third side: "<<endl;
    cin>>c;
    }
    void CalculateArea()
    {
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is: "<<area<<endl;
    }
};
int main()
{
    TriangleArea a;
    a.input();
    a.CalculateArea();
    
}


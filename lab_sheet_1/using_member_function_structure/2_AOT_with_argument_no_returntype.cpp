#include <iostream>
#include<math.h>
using namespace std;
class TriangleArea
{
    private:
    float a, b, c, s, area;
    public:
    void calculateArea(float s, float a, float b, float c){
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The area of the triangle is: "<<area<<endl;
}
};
int main()
{
    TriangleArea n;
    float a, b, c, s, area;
    cout<<"Enter the length of first side: "<<endl;
    cin>>a;
    cout<<"Enter the length of second side: "<<endl;
    cin>>b;
    cout<<"Enter the length of third side: "<<endl;
    cin>>c;
    s = (a+b+c)/2;
    n.calculateArea(s, a, b, c);
}
#include<iostream>
#include<math.h>
using namespace std;
class TriangleArea
{
    public:
    float calculateArea(float s, float a, float b, float c)
    {
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
    }
};
int main(){
    TriangleArea n;
    float a, b, c, s, area;
    cout<<"Enter the length of first side: "<<endl;
    cin>>a;
    cout<<"Enter the length of second side: "<<endl;
    cin>>b;
    cout<<"Enter the length of third side: "<<endl;
    cin>>c;
    s = (a+b+c)/2;
    cout<<"The area of the triangle is: "<<n.calculateArea(s, a, b, c)<<endl;
}



#include<iostream>
#include<math.h>
using namespace std;
class TriangleArea
{
    private:
    float a, b, c, s, area;
    public:
    float CalculateArea()
    {
        cout << "Enter the length of first side: " << endl;
    cin >> a;
    cout << "Enter the length of second side: " << endl;
    cin >> b;
    cout << "Enter the length of third side: " << endl;
    cin >> c;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
    }
};
int main()
{
    TriangleArea a;
    float area;
    area=a.CalculateArea();
    cout<<"The area of triangle is :"<<area<<endl;
}
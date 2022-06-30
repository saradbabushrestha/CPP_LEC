#include <iostream>
using namespace std;
class rough()
{
    public:
    int a=1;
    
    
};
void main()
{
    rough r1;
    cout<<"Primitive type increment"<<r1.a++;
    cout<<"User defined increment"<<r1++;
    
}
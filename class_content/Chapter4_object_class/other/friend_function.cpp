#include<iostream>
using namespace std;
class Distance
{
    friend int add(Distance);
    private:
    int meter;
    public:
    Distance(){
        meter=10;
    } 
};
int add(Distance d)
{
    d.meter+=d.meter+10;
    return d.meter;
}
int main()
{
    Distance dis;
    cout<<"Distance is:"<<add(dis);
    return 0;
}
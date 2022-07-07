#include<iostream>
using namespace std;
template<class t>
t find_max(t a, t b) 
{
    t result;
    if(a>b)
    result=a;
    else
    result=b;
    return result;
}
int main()
{
    int i1=15,i2=20;
    cout<<"Greater is"<<find_max(i1,i2)<<endl;
    float f1=4000.05,f2=3800.5;
    cout<<"Greater is"<<find_max(f1,f2)<<endl;
    double d1=55.05,d2=50.1;
    cout<<"Greater is"<<find_max(d1,d2)<<endl;
    char c1='a',c2='A';
    cout<<"Greater is"<<find_max(d1,d2)<<endl;

}
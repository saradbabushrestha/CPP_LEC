#include<iostream>
using namespace std;
float intrest(float principal, float time , float rate=0.15)
{
    return(principal*time*rate)/100;
}
int main()
{
    float p,t;
    cout<<"Enter the principal: "<<endl;
    cin>>p;
    cout<<"Enter the time(in year): "<<endl;
    cin>>t;
    cout<<"The amount of simple intrest is:"<<intrest(p,t)<<endl;
    return 0;
}
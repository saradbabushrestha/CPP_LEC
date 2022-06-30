#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imag;
    public:
    complex()
    {
        real=0;
        imag=0;
    }
    void getdata()
    {
        cout<<"Enter real part:"<<endl;
        cin>>real;
        cout<<"Enter imaginary part:"<<endl;
        cin>>imag;
    }
    complex operator +(complex &obj)
    {
        complex temp;
        cout<<"The value of temp is"<<real<<"+ i"<<imag<<endl;
        temp.real=real + obj.real;
        temp.imag=imag+ obj.imag;
        return temp;
    }
    void showdata()
    {
        cout<<"sum is :"<<real<<"+ i "<<imag<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showdata();
}
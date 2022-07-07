#include<iostream>
using namespace std;
template<class t>
class calculator
{
    private:
    t num1, num2;
    public:
    calculator(t n1, t n2)
    {
        num1=n1;
        num2=n2;
    }
    void displayResult()
    {
        cout<<"Numbers are: "<<num1<<"  and "<<num2<<"."<<endl;
        cout<<"addition is :"<<add()<<endl;
        cout<<"subtractor is :"<<subtract()<<endl;
        cout<<"Product is:"<<multiply()<<endl;
        cout<<"Division is:"<<division()<<endl;
    }
    t add()
    {
        return num1+num2;
    }
    t subtract()
    {
        return num1-num2;
    }
    t multiply()
    {
        return num1*num2;
    }
    t division()
    {
        return num1 / num2;
    }

};
int main()
{
    calculator<int> intcalc(2,1);
    calculator<float>floatcalc(2.4,1.2);
    cout<<"INt result :"<<endl;
    intcalc.displayResult();
    cout<<endl<<"FLoat results"<<endl;
    floatcalc.displayResult();
    return 0;
}
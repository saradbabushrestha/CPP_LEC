#include<iostream>
using namespace std;
class fibonacci
{
    private:
    int x;
    int y;
    public:
    fibonacci()
    {
        x=0;
        y=1;
    }
    void operator ++()
    {
        // fibonacci function 
        int temp ;
      temp = y;//lopper=1//looper=1//looper=2//looper=3
      y = x + y;//y=1+0//y=1+1//y=1+2//y=3+2
      x = temp;//x=1//x=1//x=2//x=3
    }
    void showdata()
    {
        cout<<y<<"\t";

    }

};
int main()
{
    fibonacci f;
    int n;
    int i;
    cout<<"The the number of term in fibonnaci series:"<<endl;
    cin>>n;
    cout<<"Fibonacci series"<<endl;
    cout<<"0"<<"\t";
    for(i=0;i<=n;i++)
    {
        ++f;
        f.showdata();

    }
}
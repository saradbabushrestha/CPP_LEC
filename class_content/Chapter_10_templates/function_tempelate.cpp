#include<iostream>
using namespace std;
template<class t1, class t2>
void testfunc(t1 a, t2 b)
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    int inum=5;
    float fnum=5.5;
    testfunc(inum,fnum);
    testfunc(20,"Lets make this worrld better palce");
    return 0;

}

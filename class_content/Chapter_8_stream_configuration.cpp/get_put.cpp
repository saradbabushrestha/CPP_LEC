#include<iostream>
using namespace std;
int main()
{
    char c, str[35];
    cout<<"Enter a character:"<<endl;
     cin.get(c);
    cout<<"\n Enter a string:";
    cin.get(str,35);
    cout<<"\nEntered character is:";
    cout.put(c);
 
    cout<<"\nEntered string is:"<<str;
    
    return 0;
}
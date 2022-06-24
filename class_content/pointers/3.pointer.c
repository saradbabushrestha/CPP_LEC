#include<stdio.h>
int main()
{
    int *a,b;
    b=5;
    a=b;//error
    *a=&b;//error
    a=&b;
    *a=c
    printf("The value is:%d",*a);
    printf("\n Adress: %p",a);
    
    return 0;
}
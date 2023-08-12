#include<stdio.h>
void value(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void reference(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=10,b=100;
    printf("\n*********call by value*************");
    printf("\nBefore Swapping:a=%d\tb=%d",a,b);
    value(a,b);
    printf("\nAfter Swapping:a=%d\tb=%d",a,b);
    printf("\n**********Call by Reference********");
    printf("\nBefore Swapping:a=%d\tb=%d",a,b);
    reference(&a,&b);
    printf("\nAfter Swapping:a=%d\tb=%d",a,b);
}

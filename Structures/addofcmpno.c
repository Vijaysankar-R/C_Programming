#include<stdio.h>
typedef struct Complex
{
int real;
int img;
}complex;
void main()
{
complex c1,c2;
printf("Enter num1 real part:");
scanf("%d",&c1.real);
printf("Enter num1 img part:");
scanf("%d",&c1.img);
printf("Enter num2 real part:");
scanf("%d",&c2.real);
printf("Enter num2 img part:");
scanf("%d",&c2.img);
printf("%d+%di",c1.real+c2.real,c1.img+c2.img);
}
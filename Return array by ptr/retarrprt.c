#include<stdio.h>
int* addten(int* arr)
{
    int i;
    for(i=0;i<5;i++)
    {
        *(arr+i)=*(arr+i)+10;
    }
    return arr;
}


void main()
{
    int arr[5]={1,2,3,4,5},i;
    int *ptr;
    ptr=addten(arr);
    for(i=0;i<5;i++)
    {
        printf("\t%d",*(ptr+i));
    }
}

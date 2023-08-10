#include<stdio.h>
void function(int a[3][3])
{
int i,j;
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("\na[%d][%d]is:%d",i,j,a[i][j]);
    }
}
}
void main()
{
   int i,j,arr[3][3];
   for (i=0;i<3;i++)
   {
    for (j=0;j<3;j++)
    {
    printf("\narr[%d][%d]:",i,j);
    scanf("%d",&arr[i][j]);
    }
   }
    function(arr);
}

#include<stdio.h>
void main()
    {
        int a[2][3],b[2][3],c[2][3],i,j;
        printf("Enter Matrix 1\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\na[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
         for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
               printf("\na[%d][%d]:%d",i,j,a[i][j]);
            }
        }
        printf("\n\nEnter Matrix 2\n");
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\nb[%d][%d]:",i,j);
                scanf("%d",&b[i][j]);
            }    
        }
         for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\nb[%d][%d]:%d",i,j,b[i][j]);
            }
        }
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("\n\nOutput");
         for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\nc[%d][%d]:%d",i,j,c[i][j]);
            }
        }
    }

#include<stdio.h>
void main()
    {
        int a[3][3],c[3][3],i,j;
        printf("Enter Matrix 1\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\na[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               printf("\na[%d][%d]:%d",i,j,a[i][j]);
            }
        }
           printf("\n\nTranspose of Matrix");
         for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("\nc[%d][%d]:%d",i,j,a[j][i]);
            }
        }
    }

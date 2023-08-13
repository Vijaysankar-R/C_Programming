#include<stdio.h>
#include<string.h>
void main()
{
    char str[20]="C Programming",str2[20],str3[30]="Python Programming-";
    printf("The length of str is : %d",strlen(str));
    strcpy(str2,str);
    printf("\n");
    puts(str2);
    printf("\n%d",strcmp(str,str2));
    strcat(str3,str2);
    printf("\n");
    puts(str3);
}

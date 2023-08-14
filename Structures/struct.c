#include<stdio.h>
struct Person //typedef struct Person 
{
    char name[50];
    int age;
    double salary;
};
void main()
{
    struct Person person1; // Person person1
    printf("Enter Name:");
    fgets(person1.name,sizeof(person1.name),stdin);
    printf("Enter Age:");
    scanf("%d",&person1.age);
    puts(person1.name);
    printf("%d",person1.age);
}

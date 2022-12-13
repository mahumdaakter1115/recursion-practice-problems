#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int marks;
};
int main()
{
    struct student S;

 printf("Enter Information :\n\n");

 printf("Enter Name : ");
    scanf("%s",S.name);

 printf("Enter Roll Number. : ");
    scanf("%d",&S.roll);

    printf("Enter marks : ");
    scanf("%d",&S.marks);

    printf("\nDisplaying Information:\n");

printf("Name: %s\n",S.name);
    printf("Roll number: %d\n",S.roll);
    printf("Marks: %d\n",S.marks);
    return 0;
}

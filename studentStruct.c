#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct student
{
    char name[50];

    int roll;

    float marks;
} s[10];

int main()

{

    int i;

    printf("Enter information of students:\n");
    for (i=0;i<sizeof(s); i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("Name:\n");
        scanf("%s",&s[i].name);
        printf("\nRoll:\n");
        scanf("%d",&s[i].roll);
        printf("\nMarks:\n");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<sizeof(s);i++)
    {
        printf("\nStudent %d:\n",i+1);
        printf("Name:\n");
        printf("%s",&s[i].name);
        printf("\nRoll:\n");
        printf("%d",&s[i].roll);
        printf("\nMarks:\n");
        printf("%f",&s[i].marks);
    }

    return 0;
}

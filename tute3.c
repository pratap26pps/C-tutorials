#include<stdio.h>
void main()
{
    //switch case
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    switch (marks)
    {
        case 65:
        printf("your marks out of 100 is 65\n");
        break;
        case 75:
        printf("your marks out of 100 is 75\n");
        break;
        case 94:
        printf("your marks out of 100 is 94\n");
        break;
        default:
        printf("your marks is not 65,75 and 94\n");
    }
}
#include<stdio.h>
int main()
{
    //ternary conditional operator
    int age;
    printf("enter your age:\n");
    scanf("%d",&age);
    age>=18?printf("adult\n"):printf("not adult");
    
    return 0;
}
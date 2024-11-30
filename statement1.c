#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:\n");
    scanf("%d",&age);
    if (age>18)
    {
        printf("you are adult\n");
    }
    else if (age>13 && age<18)
    {
        printf("you are teenagers\n");
    }
    else{
        printf("you are child\n");
    }
    
    return 0;
}
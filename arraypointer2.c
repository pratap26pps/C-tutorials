#include<stdio.h>
int main()
{
    int a[100]={2,4,6,8,5,9,1};
    int *ptr;
    int sum=0;
    ptr=&a;
    for(int i=0;i<7;i++)
    {
        printf("%d\n",*ptr);
        sum=sum+*ptr;
        ++ptr;
    }
    printf("the sum of element is%d",sum);
    return 0;
}
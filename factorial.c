#include<stdio.h>
int main()
{
    int n;
    long factorial=1;
    printf("enter any number");
    scanf("%d",&n);
    while(n!=0)   //!=means not equal to
    {
        factorial=factorial*n;
        n--;
    }
    
    printf("the factorial is=%d",factorial);
    
    return 0;
}
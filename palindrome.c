#include<stdio.h>
int main()
{
    int n,s=0,r,m;
    printf("enter the value of n=");
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(m==s)
    {
        printf("number is pallindrome\n");
    }
    else
    {
        printf("not a pallindrome\n");
    }
    printf("%d",s);
       return 0;
}
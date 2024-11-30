#include<stdio.h>
void main()
{
   int n,i,j;
   printf("enter the number");
   scanf("%d",&n);

    for(i=n;i>=1;i=i-1)
    {
     for(j=n;j>=i;j=j-1)
    {
        printf("%d",j);
    }
    
        printf("\n");
    }
}
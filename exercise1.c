#include<stdio.h>
int main()
{
    int n;
    printf("enter any natural number :\n");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum =sum+i; 
     
    }
    printf("the sum of natural number:%d\n",sum);
    
    return 0;
}
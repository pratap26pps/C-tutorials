#include<stdio.h>
int main()    //break statement means command out of loop and 
//continue statement mens skip of itertion.only we use continue
//word instead of break word and code as it is.
{
    int n;
    //printf("enter number");
   // scanf("%d",&n); 

    do 
    {
         printf("enter number");
         scanf("%d",&n);
        printf("%d\n",n);
        if(n % 2 != 0)
        {
        break;
        }

    }
    while(1);
    printf("thank you");
    return 0;
}
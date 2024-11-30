#include<stdio.h>
void abc();
int main()
{
   abc();
   abc();
   abc();
    return 0;
}
void abc()
{
    static int n=1;
    printf("%d\n",n);
    n++;
}
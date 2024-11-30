#include<stdio.h>
void abc();
extern int n=1;
int main()
{
   abc();
   abc();
   abc();
    return 0;
}
void abc()
{
    auto int n=1;
    printf("%d\n",n);
    n++;
}
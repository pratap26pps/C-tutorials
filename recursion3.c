#include<stdio.h>
void display(int n);
int main()
{
  int n;
  printf("enter any number\n");
  scanf("%d",&n);
  display(n);
    return 0;
}
void display(int n)
{
    static int i=1;
    if(i>n)
    {
        return;
    }
    printf("%d\n",i);
    i++;
    display(n);
}               //but space and time complixity is large so we use loop concept
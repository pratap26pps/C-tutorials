#include<stdio.h>
int main()
{
  float money=55.6;
  float *ptr=&money;
 float **pptr=&ptr;

 printf("%f",**pptr);
    return 0;
}
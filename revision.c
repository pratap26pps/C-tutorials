#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
  int d,root1,root2;

  printf("enter the coefficient of x^2=");
  scanf("%d",&a);
   printf("enter the coefficient of x=");
  scanf("%d",&b);
   printf("enter the constant=");
  scanf("%d",&c);
  printf("the quadratic equation is=%dx^2+%dx+%d=0\n",a,b,c);

  d=b*b-(4*a*c);
  if(d>=0)
  {
    printf("roots are real\n");
    root1=(-b+pow(d,0.5))/2*a;
    root2=(-b-pow(d,0.5))/2*a;
    printf("the roots are %d and %d",root1,root2);
  }
    return 0;
}
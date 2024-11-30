#include<stdio.h>
int reverse(int n);
int main()
{
  int n,x;
  printf("enter any number\n");
  scanf("%d",&n);
  x=reverse(n);
  printf("reverse no. is %d",x);
    return 0;
}
int reverse(int n)
{
    static int s=0;
   int r;
   if(n==0){
     return (s);
   }
   r=n%10;
   s=s*10+r;
   n=n/10;
   reverse(n);

}        
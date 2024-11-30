#include <stdio.h>
int main()
{
  int n,i;
  printf("enter any natural no=");
  scanf("%d",&n);



  for(i=1;i<=n;i++)
  {
     printf("%d ",i);

  }
    printf("=%d",n*(n+1)/2);
  
    return 0;
}
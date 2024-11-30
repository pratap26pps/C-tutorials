#include <stdio.h>
int main()
{
    int i=6;
    int *ptr=&i;
    int **pptr=&ptr;
    printf("%d\n",i);
    printf("%d\n",**(&ptr));
      printf("%d\n",*&i);
          printf("%d\n",***(&pptr));  
           printf("%d",**(pptr));
    return 0;
}
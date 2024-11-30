#include<stdio.h>
int main()
{
 int marks[]={4,3,5,6};  
   printf("%d%d%d%d\n",marks[2],marks[1],marks[3],marks[0]);
   
   
   int *ptr=&marks[2];
   printf("%d",*ptr++);
    return 0;
}
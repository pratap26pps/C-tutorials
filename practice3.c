#include<stdio.h>
int main()
{
    int i;
   for(int i=0;i<=12;i++)
   {
    printf("%d\n",i);
   
  if(i>4)
  {
   // break;    //bring the program control out of the loop
   continue;
  }
  printf("my name is pps\n");
  }
    return 0;
}
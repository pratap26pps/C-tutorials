#include <stdio.h>
int main()
{
  int marks[3];
  printf("enter physics\n");
  scanf("%d",&marks[0]);  
    
     printf("enter chem: \n");
  scanf("%d",&marks[1]);  
    
     printf("enter math: \n");
  scanf("%d",&marks[2]);  
    
    printf("physics is: %d\n chem is: %d\n math is:%d",marks[0],marks[1],marks[2]);
    
    return 0;
}
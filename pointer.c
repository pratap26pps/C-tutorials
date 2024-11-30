//pointer =variable store memory address of another variable
#include<stdio.h>
int main()
{
  int marks =98;  //marks is a type of variable
  int *ptr=&marks;   // * means value of address operator
                   // & means provide address of operator 
  int number=*ptr;  //new variable/

  printf("%d\n",number);

  //to prinnt address of variable
  printf("%p\n",&marks);
  printf("%u\n",&marks);
  
       printf("%u\n",ptr);
       printf("%u\n",&ptr);
    return 0;
}
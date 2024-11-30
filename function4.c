#include<stdio.h>
void xyz(int a);
     a=5; //global variable applicable for entire program
int main()
{
     int a=10;  //local variable applicable only main function block 
      xyz(a);  //(a) is actual argument that pass the value
      printf("A=%d",a);
    return 0;
}
void xyz(int a)  // here (int a) is parameter,also called formal argument
{
     
    a=a+10;
    printf("a=%d\n",a);
   
}
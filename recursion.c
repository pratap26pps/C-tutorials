//recursion = when a function call itself
#include<stdio.h>

void printHW(int count);  //declaration ya prototype

int main()   //function call
{
    printHW(4);
   return 0;
}
//recursive function

void printHW(int count)
{
    if(count==0){
        return  ;
    }
        
    printf("hello world\n");
    printHW(count-1);
}
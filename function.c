//write 2 function 1st, print hello 2nd, print goodbye
#include<stdio.h>

//declaration\protoype,it is old tradition format of c
void printHello();  //userdefined function
void printGoodbye();


int main()
{
    printHello();  //function call,name of function
    printGoodbye();
    printHello();
    return 0;
}

//function definition
void printHello()
{
    printf("Hello\n"); //library function
}

void printGoodbye(){
    printf("Goodbye\n");
}
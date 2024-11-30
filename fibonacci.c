#include<stdio.h>
// fibonacci series =1,1,2,3,5,8,13,21 etc.
int fib(int n);
int main()
{
  printf("the term of fibonacci is: %d",fib(8));

    return 0;
}

int fib(int n){
   if(n==0){     //base case for already condition is known
    return 0;   //in fibonacci series 0th term 0 and ist term is 1
   }
   if(n==1){
    return 1;
   }

    int fibNM1=fib(n-1);
    int fibNM2=fib(n-2);
    int fibN=fibNM1+fibNM2;
  //  printf("tne fibonacci is :%d\n",n,fibN);
    return fibN;
}
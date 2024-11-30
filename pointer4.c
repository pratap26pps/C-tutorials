//swap 2 number a and b.
#include<stdio.h>
void swap(int a,int b);
void _swap(int* a,int* b);
int main()
{
    int x=3;  int y=5;
    //swap(x,y);
    _swap(&x,&y);
     printf("x=%d & y=%d",x,y);
    
    return 0;
}
//call by refrence
void _swap(int* a,int* b){
   int t=*a;
   *a=*b;
    *b=t;
     printf("a=%d & b=%d\n",*a,*b);
}
//call by value
void swap(int a,int b){
   int t=a;
   a=b;
    b=t;
   printf("a=%d & b=%d\n",a,b);
}


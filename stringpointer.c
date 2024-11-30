#include<stdio.h>
#include<string.h>
int main()
{
   char a[100]={'r','o','h','t','a','k','\0'};
   char *ptr;
   puts(a);
   ptr=&a;
   while(ptr!='\0'){
   printf("%c",*ptr);
    ptr++;
   }
    return 0;
}
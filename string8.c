#include"stdio.h"
#include<string.h>
int main()
{
    int x,s1[100],s2[100];
    printf("enter the string");
    gets(s1);
  
    puts(strcpy(s2,s1));
    puts(strrev(s2));
    x=strcmp(s1,s2);
    printf("%d\n",x);
    if(x==0)
    {
        printf("string is pallindrome");
    }
    else{
          printf("string is not pallindrome");
    }
    return 0;
}
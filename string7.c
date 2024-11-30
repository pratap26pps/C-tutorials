#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{ 
    int i=0;  //i is index number
    char str[100];
    printf("enter a string");
    gets(str);
    puts(str);
  while(str[i]!='\0'){
     i++;
  }
    printf("the length is %d\n",i);
    printf("the string is %s",str);
    return 0;
}
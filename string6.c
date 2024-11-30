#include<stdio.h>
#include<string.h>
int main()
{
    int x,s1[100],s2[100];
    printf("enter the 1st string");
    gets(s1);
     printf("enter the 2nd string");
    gets(s2);
    x=strcmp(s1,s2);
    printf("%d",x);
  // x=-ve means s1 is smaller then s2
  // x=+ve means s1 is greater then s2
  // x=0 means string of s1 and s2 are same  
    return 0;
}
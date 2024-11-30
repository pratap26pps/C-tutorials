#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[100],s2[100];
    printf("enter a string");
    gets(s1);   //used instead of scanf("%s")
    i=strlen(s1);
    printf("%d",i);
    puts(s1);   //to used print string
    puts(strupr(s1));
   puts(strrev(s1));  
   strcpy(s2,s1);  //used to copy string that store in one array location into another
   puts(s2);
        return 0;
}
//string represent a word character arrayterminated with '\0'(null character)
//character array terminate with null character is string. 
#include<stdio.h>
void printString (char arr[]);
int main()
{
  //  char firstname[]="pankaj";
    //char lastname[]="singh";
    // printString(firstname);
    //   printString(lastname);
    char Name[50];
    scanf("%s",Name);
    printf("enter your name is; %s",Name);  
    return 0;
}
void printString (char arr[])
{
    for(int i=0;arr[i] != '\0';i++);{
    printf("%c,arr[i]");
    }
    printf("\n");
}

#include<stdio.h>

void printString(char arr[]); 
void countLength(char arr[]);
int main()
{
    // char firstname[50];
    // scanf("%s",&firstname);
    // printf("enter a first name: %s",firstname);
    char str[100];
    gets(str);
    puts(str);
    return 0;
}
void countLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!=0;i++){
        count++;}
        return count;
    }

void printString(char arr[])
{
    for(int i=0;arr[i] != '\0';i++){
        printf("%s",arr[i]);
    }
    printf("\n");
}


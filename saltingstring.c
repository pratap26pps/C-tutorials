#include<stdio.h>
#include<string.h>
 void printString(char arr[]); 
 int countLength(char arr[]);
void salting(char password[]);
int main()
{
   char password [100];
   scanf("%s",password);
  salting(password);   //salting is a security that protect from password hacking by adding some character at any position of passwpord.
    return 0;
}
void salting(char passord[]){
    char salt[]="123";
    char newpass[100];
    strcpy(newpass,passord);
    strcat(newpass,salt);
    puts(newpass);
}
int countLength(char arr[]){
    int count=0;
    for(int i=0;arr[i]!=0;i++){
        count++;
        }
        return count;
    
}
void printString(char arr[])
{
    for(int i=0;arr[i] != '\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
 

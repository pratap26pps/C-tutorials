#include <stdio.h>
int main()
{
    int age;
    printf("entr your age\n");
    scanf("%d",&age);

    if(age>=18)
    {
      printf("adult\n");
         if(age=18){
      printf("he can voote\n");
    }
     
     }
    else if(age>12&&age<18){
        printf("teenagers\n");
    }
    else{
        printf("not adult");
    }
    
    
    return 0;
}
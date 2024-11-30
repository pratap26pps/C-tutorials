#include<stdio.h>
 typedef struct student{
    int roll;
    float cgpa;
    char name[50];
} stu;  //alias name i.e nick name
int main()
{
    stu s1;
   s1.roll=2341;
   s1.cgpa=56.4;
  strcpy(s1.name,"pankaj");
    
    printf("%s",s1.name);
    return 0;
}
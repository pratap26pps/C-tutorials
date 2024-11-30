#include <stdio.h>
#include <string.h>
struct student{
    int roll;
    float cgpa;
    char name[50];

};


int main()
{
   struct student s1 ={1436,34.6,"pankaj",};
   printf("%d\n%f\n",s1.roll,s1.cgpa);
 printf("%s",s1.name);
   

    return 0;
}
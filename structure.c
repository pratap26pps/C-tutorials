
#include<stdio.h>
#include<string.h>

//structure is a user defined data type function;
//structure are store in contiguous memory location
//benifits:saves us from  too many variables
   struct student
   {
    char name[100];
    int rollno;
    float cgpa;
   };
     
   int main()
   {
    struct student s1;
     // s1.name="pankaj";
     strcpy(s1.name,"pankaj");
    s1.rollno=4536;
    s1.cgpa=9.4;
   
   printf("student name: %s\n",s1.name);
   printf("student roll no: %d\n",s1.rollno);
   printf("student cgpa: %f\n",s1.cgpa);
   
    return 0;
   }
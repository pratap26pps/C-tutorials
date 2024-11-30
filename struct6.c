
#include<stdio.h>
#include<stdio.h>
   struct student
   {
    char name[100];
    int rollno;
    float cgpa;
   };
     
   int main()
   {
    struct student s1,s2;
     
     printf("enter 1st name\n");
     gets(s1.name);
          printf("enter 2nd name\n");
     gets(s2.name);

         printf("enter 1st roll no \n");
    scanf("%d",&(s1.rollno));
       printf("enter 1st cgpa \n");
    scanf("%f",&(s1.cgpa));
   
   
         printf("enter 2nd roll no \n");
    scanf("%d",&(s2.rollno));
       printf("enter 2nd cgpa \n");
    scanf("%f",&(s2.cgpa));

   printf("student 1st name: %s\n",s1.name);
   printf("student roll no: %d\n",s1.rollno);
   printf("student cgpa: %f\n\n",s1.cgpa);
   
     printf("student 2nd name: %s\n",s2.name);
   printf("student roll no: %d\n",s2.rollno);
   printf("student cgpa: %f\n",s2.cgpa);
   
    return 0;
   }